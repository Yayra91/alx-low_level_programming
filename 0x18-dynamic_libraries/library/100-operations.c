#include <stdio.h>

/**
 * add - operater
 * @a: input
 * @b: input
 * Return: sum of input
 */
int add(int a, int b)
{
	return a + b;
}

/**
 * sub - operator
 * @a: input
 * @b: input
 * Return: sum differrence of input
 */
int sub(int a, int b)
{
	return a - b;
}

/**
 * mul - operator
 * @a: input
 * @b: input
 * Return: sum product of input
 */
int mul(int a, int b)
{
	return a * b;
}

/**
 * div - operator
 * @a: input
 * @b: input
 * Return: sum quotient of input
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return 0;
	}
	return a / b;
}

/**
 * mod - operator
 * @a: input
 * @b: input
 * Return: sum modulus of input
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: division by zero\n");
		return 0;
	}
	return a % b;
}
