/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:18:26 by vivsanto          #+#    #+#             */
/*   Updated: 2025/04/20 14:26:14 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);
extern	void	error_message(void);

void	conditions(int x, int y, int coluna, int linha)
{
	if ((linha == 1 || linha == y) && coluna == 1)
		ft_putchar('A');
	else if ((linha == 1 || linha == y) && coluna == x)
		ft_putchar('C');
	else if (linha > 1 && linha < y && coluna > 1 && coluna < x)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	linha = 1;
	if (x < 0 || y < 0)
		return (error_message());
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			conditions(x, y, coluna, linha);
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}
