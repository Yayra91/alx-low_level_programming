#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Main Entry
 * @ac: input
 * @av: input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int so, n, pot = 0, leng = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (so = 0; so < ac; so++)
	{
		for (n = 0; av[so][n]; n++)
			leng++;
	}
	leng += ac;

	str = malloc(sizeof(char) * leng + 1);
	if (str == NULL)
		return (NULL);

	for (so = 0; so < ac; so++)
	{
		for (n = 0; av[so][n]; n++)
		{
			str[pot] = av[so][n];
			pot++;
		}
		if (str[pot] == '\0')
		{
			str[pot++] = '\n';
		}
	}
	return (str);
}
