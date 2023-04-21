#include <stdio.h>
#include <unistd.h>
/**
 * main - main entry
 * DEscriptioN: print some text followed by new a line
 * Return: 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

