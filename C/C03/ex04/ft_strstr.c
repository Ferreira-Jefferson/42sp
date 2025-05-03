/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:17:50 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/29 16:15:24 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main() {
    char str1[] = "Olá, mundo!";
    char to_find1[] = "mundo";

    char str2[] = "Não achou a sub retorna a str";
    char to_find2[] = "xyz"; // Substring inexistente

    char str3[] = ""; // String vazia
    char to_find3[] = "qualquer coisa";

    char str4[] = "Sub vazia retorna str";
    char to_find4[] = ""; // Substring vazia

    char *resultado;

    // Teste 1: Substring presente
    resultado = ft_strstr(str1, to_find1);
    printf("Resultado 1: '%s'\n", resultado ? resultado : "NULL");

    // Teste 2: Substring não presente
    resultado = ft_strstr(str2, to_find2);
    printf("Resultado 2: '%s'\n", resultado ? resultado : "NULL");

    // Teste 3: String vazia e to_find com conteúdo
    resultado = ft_strstr(str3, to_find3);
    printf("Resultado 3: '%s'\n", resultado ? resultado : "NULL");

    // Teste 4: String com conteúdo e to_find vazia
    resultado = ft_strstr(str4, to_find4);
    printf("Resultado 4: '%s'\n", resultado ? resultado : "NULL");

    return 0;
}
*/