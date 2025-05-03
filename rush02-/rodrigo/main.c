/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgregori <rgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:38:38 by rgregori          #+#    #+#             */
/*   Updated: 2025/05/03 13:32:48 by rgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int main(int argc, char **argv)
{
	if (!(argc == 2 || argc == 3))
	{
		ft_puterror("Error\n");
		return (1);
	}
	if (!ft_is_valid_number(argv[argc -1]))
	{
		ft_puterror("Error\n");
		return (1);
	}
}