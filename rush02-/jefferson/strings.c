#include "strings.h"
#include <stdlib.h>

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (!src[i])
		{
			dest[i] = '\0';
			return (str_len(src));
		}
		dest[i] = src[i];
		i++;
	}
	if (size)
		dest[size - 1] = '\0';
	return (str_len(src));
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int count_words(char *str, char sep)
{
	int i;
	int len;
	int start;

	len = 0;
	start = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] != sep)
			start = 1;
		if(start && str[i] == sep)
		{
			len++;
			start = 0;
		}
		i++;
	}
	if(start)
		len++;
	return len;
}

s_split	ft_split(char *str, char sep)
{
	int	i;
	int	j;
	int	jj;
	int start;

	s_split vet_words;
	vet_words.len = 0;
	vet_words.vet = NULL;
	if(*str == '\0')
		return (vet_words);

	int c_words = count_words(str, sep);
	if(c_words == 0)
		return (vet_words);

	vet_words.vet = malloc(c_words * sizeof(char*));
	i = 0;
	while(i < c_words)
	{
		vet_words.vet[i] = malloc(100 * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	jj = 0;
	while (str[i])
	{
		if(str[i] != sep)
		{
			vet_words.vet[j][jj] = str[i];
			jj++;
		} else {
			vet_words.vet[j][jj] = '\0';
			vet_words.len++;
			j++;
			jj = 0;
		}
		i++;
	}
	if (jj != 0)
	{
		vet_words.vet[j][jj] = '\0';
		vet_words.len++;
	}
	return (vet_words);
}


