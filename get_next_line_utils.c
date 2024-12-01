/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:12:47 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/11/26 18:12:49 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nbytes, size_t size)
{
	size_t			i;
	unsigned char	*str;

	str = malloc(nbytes * size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < (nbytes * size))
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

int	ft_strchr(char *stash)
{
	int		i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int		len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*str;
	int		i;
	int		x;

	if (!stash)
		stash = (char *)ft_calloc(1, sizeof(char));
	if (!stash || !buffer)
		return (NULL);
	if (ft_strlen(stash) + ft_strlen(buffer) == 0)
	{
		free(stash);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(stash) + ft_strlen(buffer) + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (stash[++i])
		str[i] = stash[i];
	x = 0;
	while (buffer[x])
		str[i++] = buffer[x++];
	free(stash);
	return (str);
}

char	*ft_reset(char *stash)
{
	int		i;
	int		x;
	char	*str;

	i = 0;
	x = 0;
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	str = (char *) malloc((ft_strlen(stash) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (stash[i++])
		str[x++] = stash[i];
	str[x] = '\0';
	free(stash);
	return (str);
}
