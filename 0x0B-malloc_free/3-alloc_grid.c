#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (height <= 0 || width <= 0 || tab == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(sizeof(**tab) * width);
		if (tab[i] == 0)
		{
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}
}
