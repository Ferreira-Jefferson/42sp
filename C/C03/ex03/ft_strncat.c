/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:42:30 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/29 16:10:46 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;

	len_dest = length_str(dest);
	i = 0;
	j = len_dest;
	while (src[i] && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main() {
	char str1[20] = "Olá, ";
	char str2[] = "mundo maravilhoso!";
		
	ft_strncat(str1, str2, 5);

	printf("String concatenada: %s\n", str1);

	return 0;
}*/
