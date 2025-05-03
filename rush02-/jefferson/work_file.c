#include "work_file.h"
#include "strings.h"
#include "atoi.h"
#include "utils.h"

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int count_lines(int fd)
{
	char ch;
	int len;

	len = 0;
	while(read(fd, &ch, BUFFER_SIZE) > 0)
		if(ch == '\n')
			len++;
	return (len);
}

char **create_matriz(int fd, int lines)
{	
	char ch;
	int len;
	int i;
	char **matriz;
	matriz = malloc(lines * sizeof(char*));
	i = 0;
	len = 0;
	while(read(fd, &ch, BUFFER_SIZE) > 0)
	{
		len++;
		if(ch == '\n')
		{
			matriz[i] = malloc((len + 1) * sizeof(char));
			i++;
			len = 0;
		}
	}
	return (matriz);
}

char **populate_matriz(int fd, char **matriz, int len_matriz)
{
	int i = 0;
	int j = 0;
	char ch;
	while(read(fd, &ch, BUFFER_SIZE) > 0)
	{
		if(ch == '\n')
		{
			matriz[i][j] = '\0';
			i++;
			j = 0;
		} else {
			matriz[i][j] = ch;
			j++;
		}
	}
	return (matriz);
}
unsigned __int128 char_number_to_int(char *num)
{
	int len_str;

	len_str = 0;
	while(num[len_str])
		len_str++;
	if(!is_number(num[len_str - 1]))
		num[len_str - 1] = '\0';
	return ft_atoi(num);
}

s_numbers *generate_struct(char **matriz, int len_matriz)
{
	s_numbers *numbers = malloc(len_matriz * sizeof(s_numbers));
	int	i = 0;
	while(i < len_matriz)
	{
		s_split line_splited;
		line_splited = ft_split(matriz[i], ' ');
		s_numbers str_numbers;
		str_numbers.number = char_number_to_int(line_splited.vet[0]);
		str_numbers.number_text = ft_strndup(line_splited.vet[1], 100);
		numbers[i] = str_numbers;
		i++;
	}
	return (numbers);
}

s_numbers *work_file(char *name_file)
{
	FILE *arquivo;
	int fd;
	char ch;
	int i;

	fd = open(name_file, 0);

	if(fd == -1)
	{
		ft_putstr("Error");
		return (NULL);
	}

	int lines =  count_lines(fd);
	lseek(fd, 0, SEEK_SET);

	char **matriz = create_matriz(fd, lines);
	lseek(fd, 0, SEEK_SET);

	matriz = populate_matriz(fd, matriz, lines);
	close(fd);


	s_numbers *numbers = generate_struct(matriz, lines);
	
	i = 0;
	while(i< lines)
		free(matriz[i++]);
	free(matriz);

	return numbers;
}
