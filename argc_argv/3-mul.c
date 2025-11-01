#include "main.h"
#include <stdio.h>
/**
* main - multiplies two integers
* argc: argument count
* argv: argument vector
* result: product of multiplication
*
* Return: the product of a and b
*/
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error/n")
		return (1);
	}
	int result = argv[1] * argv[2];

	printf("%d\n", result);
}
