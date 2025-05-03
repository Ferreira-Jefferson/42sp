/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgregori <rgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:06:55 by rgregori          #+#    #+#             */
/*   Updated: 2025/05/03 16:33:53 by rgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

int		ft_is_valid_number(char *str);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
int		ft_strlen(char *c);
char	*ft_strndup(char *src, int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

typedef struct s_entry
{
	char	*number;
	char	*text;
}	t_entry;


#endif
