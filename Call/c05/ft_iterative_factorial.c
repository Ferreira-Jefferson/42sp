int ft_iterative_factorial(int nb)
{
	int result;
	
	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}
