
#include    <unistd.h>

void	ft_is_negative(int c)
{
	if (c >= 0)
		write(1, &"P", 1);
	else
		write(1, &"N", 1);
}
int main()
{
    ft_is_negative(3);
    return(0);
}