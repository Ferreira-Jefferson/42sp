/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:15:57 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/30 07:55:04 by jtertuli         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
/*
#include <stdio.h>
#include <string.h>

void test_strlcat(char *test_name, char *dst, char *src, size_t size,
 size_t expected) {
    char temp_dst[256]; 
    strncpy(temp_dst, dst, sizeof(temp_dst));
    size_t result = ft_strlcat(temp_dst, src, size);

    printf("%s:\n", test_name);
    printf("Esperado: %zu | Recebido: %zu | Correto: %d\n",
	 expected, result, result == expected);
    printf("Resultado dst: \"%s\"\n\n", temp_dst);
}

int main() {
    char buffer1[20] = "Hello ";
    char buffer2[10] = "Hi";
    char buffer3[5] = "Test";
    char buffer4[15] = "";
    char buffer5[1] = "";

    test_strlcat("Caso 1 - Espaço suficiente",
	 buffer1, "World", sizeof(buffer1), strlen("Hello World"));
    test_strlcat("Caso 2 - Tamanho insuficiente",
	 buffer2, "Hello", sizeof(buffer2), strlen("Hi") + strlen("Hello"));
    test_strlcat("Caso 3 - Espaço muito pequeno",
	 buffer3, "123456", sizeof(buffer3), strlen("Test") + strlen("123456"));
    test_strlcat("Caso 4 - Buffer vazio, espaço disponível",
	 buffer4, "Content", sizeof(buffer4), strlen("Content"));
    test_strlcat("Caso 5 - Buffer nulo ou tamanho 0",
	 buffer5, "Data", sizeof(buffer5), strlen("Data"));

    return 0;
}
*/
