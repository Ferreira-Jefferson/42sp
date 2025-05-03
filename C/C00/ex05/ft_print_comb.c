/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 08:39:19 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/16 14:10:36 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print(char a, char b, char c, int last)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	print_char(a);
	print_char(b);
	print_char(c);
	if (!last)
	{
		print_char(comma);
		print_char(space);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int		is_last;

	is_last = 0;
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{	
				if (a == '7' && b == '8' && c == '9')
					is_last = 1;
				print(a, b, c, is_last);
				c++;
			}
			b++;
		}
		a++;
	}
}
