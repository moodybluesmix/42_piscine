
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main()
{
	int a;
	int b;
	int x;
	int y;

	a = 14;
	b = 3;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", x);
	printf("%d", y);
}
*/