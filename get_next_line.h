/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:13:00 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/11/26 18:13:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_stash_add(char *stash, int fd);
int		ft_strchr(char *stash);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_getline(char *stash);
char	*ft_reset(char *stash);
int		ft_strlen(char *str);
void	*ft_calloc(size_t nbytes, size_t size);

#endif
