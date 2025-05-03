#include "atoi.h"

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
		c == '\r' || c == '\f' || c == '\v');
}

int	is_signal(char c)
{
	return (c == '+' || c == '-' );
}

unsigned __int128	ft_atoi(char *str)
{
	unsigned __int128	signal;
	unsigned __int128	number;

	signal = 1;
	number = 0;

	while (is_space(*str))
		str++;
	while (is_signal(*str))
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (is_number(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * signal);
}

#include <stdio.h>
#include <stdint.h>

void print_int128(unsigned __int128 num) {
    if (num < 0) {
        putchar('-');  // Trata números negativos
        num = -num;
    }

    // Divide o número em duas partes
    unsigned long long high = (unsigned long long)(num >> 64); // Parte alta
    unsigned long long low = (unsigned long long)(num);        // Parte baixa

    if (high) {
        printf("%llu", high);  // Imprime parte alta
        printf("%019llu", low); // Imprime parte baixa com zeros à esquerda
    } else {
        printf("%llu", low);  // Apenas parte baixa se `high == 0`
    }
}