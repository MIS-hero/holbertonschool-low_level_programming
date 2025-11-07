#include <stdio.h>
#include <stdlib.h>

/* Checks if a string contains only digits */
int is_digits_only(char *s)
{
    int i = 0;

    if (!s)
        return (0);

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/* Returns length of string */
int length(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/* Multiplies two positive numbers as strings */
void mul(int argc, char *argv[])
{
    int len1, len2, i, j, mul_val, sum, *result;

    if (argc != 3 || !is_digits_only(argv[1]) || !is_digits_only(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    len1 = length(argv[1]);
    len2 = length(argv[2]);

    result = calloc(len1 + len2, sizeof(int));
    if (!result)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            mul_val = (argv[1][i] - '0') * (argv[2][j] - '0');
            sum = mul_val + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
        printf("0\n");
    else
    {
        for (; i < len1 + len2; i++)
            printf("%d", result[i]);
        printf("\n");
    }

    free(result);
}
