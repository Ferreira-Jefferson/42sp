#ifndef STRINGS_H
#define STRINGS_H

#include <unistd.h>

typedef struct 
{
	int len;
	char **vet;
} s_split;

unsigned int	str_len(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putstr(char *str);
int	count_words(char *str, char sep);
s_split	ft_split(char *str, char sep);

#endif