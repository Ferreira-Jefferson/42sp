/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgregori <rgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:41:43 by rgregori          #+#    #+#             */
/*   Updated: 2025/05/03 13:33:08 by rgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i++;
	while (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
}

void	ft_puterror(char *str)
{
	int	i;

	i++;
	while (str[i])
	{
		write(2, str[i], 1);
		i++;
	}
}
