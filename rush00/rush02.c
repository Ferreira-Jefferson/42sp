/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:13:03 by vivsanto          #+#    #+#             */
/*   Updated: 2025/04/19 22:13:18 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);
extern	void	error_message(void);

void	conditions(int col, int lin, int coluna, int linha)
{
	if ((coluna == col && linha == 1) || (linha == 1 && coluna == 1))
		ft_putchar('A');
	else if ((linha == lin && coluna == 1) || (coluna == col && linha == lin))
		ft_putchar('C');
	else if ((linha != 1 && linha != lin) && (coluna != 1 && coluna != col))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int col, int lin)
{
	int	coluna;
	int	linha;

	coluna = 1;
	linha = 1;
	if (col < 0 || lin < 0)
		return (error_message());
	while (linha <= lin)
	{
		while (coluna <= col)
		{
			conditions(col, lin, coluna, linha);
			coluna++;
		}
		ft_putchar('\n');
		linha++;
		coluna = 1;
	}
}
