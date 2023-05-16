#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **tree;
	int a,b;

	if (width <= 0 || height <= 0)
		return (NULL);

	tree = malloc(sizeof(int *) * height);

	if (tree == NULL)
		return (NULL);

	for (a = 0; a< height; a++)
	{
		tree[a] = malloc(sizeof(int) * width);

		if (tree[a] == NULL)
		{
			for (; a >= 0; a--)
				free(tree[a]);

			free(tree);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			tree[a][b] = 0;
	}

	return (tree);
}

