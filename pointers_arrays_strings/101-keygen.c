#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen.c - generate random valid passwords for 101-crackme
 *
 * The 101-crackme program accepts any string whose ASCII characters'
 * sum equals 2772 (0xAD4). This program builds random printable-character
 * sequences (ASCII 33..126) whose sum equals 2772.
 *
 * Usage: compile with:
 *   gcc -Wall -Wextra -pedantic -std=gnu89 keygen.c -o keygen
 * Then run:
 *   ./keygen
 */

int main(void)
{
	int target = 2772;
	int sum = 0;
	int min = 33;    /* first printable */
	int max = 126;   /* last printable */

	srand((unsigned int)time(NULL));

	while (sum < target)
	{
		int remain = target - sum;

		/* If remaining value is itself a printable char, output it and finish */
		if (remain >= min && remain <= max)
		{
			putchar((char)remain);
			sum += remain;
			break;
		}

		/* If remaining is bigger than max, pick a random printable character
		 * but make sure we do not leave a tiny remainder (< min) that can't
		 * be represented by a printable char. So pick r such that:
		 *   min <= r <= max AND (remain - r == 0 || remain - r >= min)
		 */
		if (remain > max)
		{
			int r;
			int allowed_max = remain - min; /* ensure remainder >= min after choosing r */

			/* allowed_max might be larger than max; cap it */
			if (allowed_max > max)
				allowed_max = max;

			/* choose r in [min .. allowed_max] */
			if (allowed_max < min)
				r = min; /* fallback, shouldn't normally happen */
			else
				r = (rand() % (allowed_max - min + 1)) + min;

			putchar((char)r);
			sum += r;
			continue;
		}

		/* If we reach here, remain is < min (should be avoided by design).
		 * As a defensive fallback, emit a minimal printable char and continue.
		 */
		putchar((char)min);
		sum += min;
	}

	putchar('\n');
	return (0);
}
