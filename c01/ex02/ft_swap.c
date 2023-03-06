
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int	main()
{
	int	x;
	int	y;
	
	x = 5;
	y = 7;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}

*/