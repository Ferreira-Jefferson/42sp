/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:46:36 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/17 06:25:16 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_comma(void)
{
	putchar(',');
	putchar(' ');
}

void	print(char a, char b, char c, char d)
{
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);
}

void	internal_loop(char a, char b)
{
	char	d;
	char	c;

	d = b + 1;
	c = a;
	while (c <= '9')
	{
		while (d <= '9')
		{
			print(a, b, c, d);
			if (!(a == '9' & b == '8'))
				print_comma();
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			internal_loop(a, b);
			b++;
		}
		a++;
	}
}
