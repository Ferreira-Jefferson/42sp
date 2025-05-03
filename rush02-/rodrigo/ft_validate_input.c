/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_input.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgregori <rgregori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:20:38 by rgregori          #+#    #+#             */
/*   Updated: 2025/05/03 16:19:52 by rgregori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdlib.h>
#include <fcntl.h>
#define BUF_SIZE 1024

int	ft_is_valid_number(char *input)
{
	int	i;

	i = 0;
	if (input[i] == '\0')
		return (0);
	while (input[i])
	{
		if (!(input[i] >= '0' && input[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}



char	*ft_strjoin_custom(char *s1, char *s2, int s2_len)
{
	int		len1;
	char	*joined;
	int		i;
	int		j;

	len1 = ft_strlen(s1);
	joined = malloc(len1 + s2_len + 1);
	if (!joined)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		joined[i++] = s2[j];
		j++;
	}
	joined[i] = '\0';
	return (joined);
}

char	*read_dict(char *filepath)
{
	int		fd;
	int		bytes;
	char	buffer[BUF_SIZE + 1];
	char	*result;
	char	*tmp;

	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';

	fd = open(filepath, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Dict Error\n");
		free(result);
		return (NULL);
	}
	bytes = read(fd, buffer, BUF_SIZE);
	while (bytes > 0)
	{
		buffer[bytes] = '\0';
		tmp = result;
		result = ft_strjoin_custom(tmp, buffer, bytes);
		free(tmp);
	}

	if (bytes == -1)
	{
		ft_puterror("Dict Error\n");
		free(result);
		return (NULL);
	}
	close(fd);
	return (result);
}

