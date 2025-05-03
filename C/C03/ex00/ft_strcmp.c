/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtertuli <jtertuli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:06:48 by jtertuli          #+#    #+#             */
/*   Updated: 2025/04/29 16:17:20 by jtertuli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main() {
    // Strings para teste
    char s1[] = "apple";
    char s2[] = "apple";
    char s3[] = "apricot";
    char s4[] = "banana";

    // Testando ft_strcmp()
    printf("== Testando ft_strcmp() ==\n");
    printf("Comparando '%s' e '%s': %d\n",
	 s1, s2, ft_strcmp(s1, s2)); // s1 == s2
    printf("Comparando '%s' e '%s': %d\n",
	 s1, s3, ft_strcmp(s1, s3)); // s1 < s3
    printf("Comparando '%s' e '%s': %d\n",
	 s4, s1, ft_strcmp(s4, s1)); // s4 > s1

    // Testando strings vazias
    char empty[] = "";
    printf("\n== Testando strings vazias ==\n");
    printf("Comparando '%s' e string vazia: %d\n",
	 s1, ft_strcmp(s1, empty));
    printf("Comparando duas strings vazias: %d\n",
	 ft_strcmp(empty, empty));

    return 0;
}*/
