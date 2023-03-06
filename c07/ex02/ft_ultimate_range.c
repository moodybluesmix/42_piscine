
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	c = max - min;
	d = ((int *)malloc(c * sizeof(int)));
	if (d == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = d;
	while (i < c)
	{
		d[i] = min + i;
		i++;
	}
	return (c);
}
