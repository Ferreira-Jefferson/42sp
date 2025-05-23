int ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i = i + 1;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb = nb + 1;
	return (nb);
}
