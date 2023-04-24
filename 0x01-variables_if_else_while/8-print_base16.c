#include <stdio.h>
/**
 * main - main Entry
 * Description: print all the num of base 16 in lowcase
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');

		return (0);

}
