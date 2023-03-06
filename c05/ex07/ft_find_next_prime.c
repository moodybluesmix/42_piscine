
int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	if (nb < 3)
		return (2);
	if (!(nb % 2))
		nb++;
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
