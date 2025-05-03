/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgregori <rgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 14:11:42 by rgregori          #+#    #+#             */
/*   Updated: 2025/05/03 16:41:07 by rgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <fcntl.h>
#define BUF_SIZE 1024

int	validate_line(char *line)
{
	int	i;
	int	num_start;

	i = 0;
	while (line[i] == ' ')
		i++;
	num_start = i;
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	if (i == num_start)
		return (0);
	while (line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (0);
	i++;
	while (line[i] == ' ')
		i++;
	if (line[i] == '\0')
		return (0);
	return (1);
}

t_entry	ft_create_entry(char *line)
{
	t_entry	entry;
	int		i;
	int		start;
	int		end;

	i = 0;
	while (line[i] == ' ')
		i++;
	start = i;
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	end = i;
	entry.number = ft_strndup(&line[start], end - start);
	if (!entry.number)
		return ((t_entry){NULL, NULL});

	while (line[i] != ':' && line[i])
		i++;
	i++;

	while (line[i] == ' ')
		i++;
	start = i;
	while (line[i])
		i++;
	end = i;
	entry.text = ft_strndup(&line[start], end - start);
	if (!entry.text)
	{
		free(entry.number);
		return ((t_entry){NULL, NULL});
	}
	return (entry);
}



t_entry	*parse_dict(char *dict_text, int *out_size)
{
	t_entry	*entries;
	int		count;
	int		capacity;
	char	*line;

	count = 0;
	capacity = 100;
	entries = malloc(sizeof(t_entry) * capacity);
	if (!entries)
		return (NULL);
	while (*dict_text)
	{
		line = dict_text;
		while (*dict_text && *dict_text != '\n')
			dict_text++;
		if (*dict_text == '\n')
		{
			*dict_text = '\0';
			dict_text++;
		}
		if (*line == '\0')
			continue ;
		if (!validate_line(line))
		{
			ft_puterror("Dict Error\n");
			free(entries);
			return (NULL);
		}
		entries[count] = ft_create_entry(line);
		count++;
	}
	*out_size = count;
	return (entries);
}
