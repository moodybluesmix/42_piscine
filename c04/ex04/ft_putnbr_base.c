
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i = i + 1;
	}
	return (i);
}

int	ft_check_base(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0' || i == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		while ((i + 1) < ft_baselen(str))
		{
			if (str[i] == str[i + 1])
				return (0);
			i++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_baselen(base);
	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr < base_len)
		{
			ft_putchar(base[nbr]);
		}
		if (nbr >= base_len)
		{
			ft_putnbr_base((nbr / base_len), base);
			ft_putnbr_base((nbr % base_len), base);
		}
	}
}
