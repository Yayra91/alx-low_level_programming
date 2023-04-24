#include <stdio.h>
/**
 * main - First entry
 * Description: Print digit in base 10 from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
