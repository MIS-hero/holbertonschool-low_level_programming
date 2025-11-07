#include <stdio.h>
#include <stdlib.h>

/**
* is_digits_only - Checks if a string contains only digits
* @s: The input string
* Return: 1 if string contains only digits, 0 otherwise
*/
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

/**
* length - Returns the length of a string
* @s: The input string
* Return: Length of the string
*/
int length(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
* check_args - Validates program arguments
* @argc: Argument count
* @argv: Argument vector
*/
void check_args(int argc, char *argv[])
{
	if (argc != 3 || !is_digits_only(argv[1]) || !is_digits_only(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
}

/**
* multiply_strings - Multiplies two positive numbers as strings
* @num1: First number string
* @num2: Second number string
* @result: Array to store multiplication result
*/
void multiply_strings(char *num1, char *num2, int *result)
{
	int len1 = length(num1);

	int len2 = length(num2);

	int i, j, mul, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
}

/**
* print_result - Prints the result array as a number
* @result: Array containing the number
* @size: Size of the array
*/
void print_result(int *result, int size)
{
	int i = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		printf("0\n");
	else
	{
		for (; i < size; i++)
			printf("%d", result[i]);
		printf("\n");
	}
}

/**
* main - Multiplies two positive numbers
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	int len1, len2, *result;

	check_args(argc, argv);

	len1 = length(argv[1]);
	len2 = length(argv[2]);

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
	{
		printf("Error\n");
		free(result);
		exit(98);
	}

	multiply_strings(argv[1], argv[2], result);
	print_result(result, len1 + len2);

	free(result);
	return (0);
}
