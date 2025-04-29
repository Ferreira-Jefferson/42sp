/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:15:57 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/29 14:14:33 by jtertuli         ###   ########.fr       */
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

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = length_str(dest);
	len_src = length_str(src);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i) < (size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*#include <stdio.h>
int main() {
    char dest[25] = "Hello";
    char source[] = ", world!";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, source, size);

    printf("Dest após concatenação: '%s'\n", dest);
    printf("Comprimento total esperado: %zu\n", result);

    // Verificando se houve truncamento
    if (result >= size) {
        printf("O conteúdo foi truncado!\n");
    } else {
        printf("Concatenação concluída sem problemas.\n");
	}
    return 0;
}*/