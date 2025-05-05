/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 07:24:30 by jtertuli          #+#    #+#             */
/*   Updated: 2025/05/05 07:39:01 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - argc;
	j = 0;
	while (argv[i][j])
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
