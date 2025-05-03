/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:42:13 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/29 08:32:43 by jtertuli         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	len_dest;
	int	len_src;
	int	len_total;

	len_dest = length_str(dest);
	len_src = length_str(src);
	len_total = len_dest + len_src;
	i = 0;
	j = len_dest;
	while (j < len_total)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[len_total] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main() {
    char str1[50] = "Olá, "; 
    char str2[] = "mundo!";

    // Concatenando str2 em str1
    ft_strcat(str1, str2);

    // Exibindo o resultado
    printf("String concatenada: %s\n", str1);

    return (0);
}*/