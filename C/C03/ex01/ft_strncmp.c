/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:26:02 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/28 13:08:58 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		if (!s1[i] || !s2[i])
			break ;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main() {
    // Strings para teste
    char s1[] = "testeum";
    char s2[] = "testedois";
    char s4[] = "banana";

    // Testando ft_strncmp()
    printf("\n== Testando ft_strncmp() ==\n");
    printf("Comparando os 5 primeiros caracteres de '%s' e '%s': %d\n"
	, s1, s2, ft_strncmp(s1, s2, 5)); 
    printf("Comparando os 6 primeiros caracteres de '%s' e '%s': %d\n"
	, s1, s2, ft_strncmp(s1, s2, 6)); 
    printf("Comparando os 2 primeiros caracteres de '%s' e '%s': %d\n",
	 s4, s1, ft_strncmp(s4, s1, 2)); 
    // Testando strings vazias
    char empty[] = "";
    printf("\n== Testando strings vazias ==\n");
    printf("Comparando '%s' e string vazia: %d\n",
	 s1, ft_strncmp(s1, empty, 10));
    printf("Comparando duas strings vazias: %d\n", ft_strncmp(empty, empty, 10));

    return 0;
}*/
