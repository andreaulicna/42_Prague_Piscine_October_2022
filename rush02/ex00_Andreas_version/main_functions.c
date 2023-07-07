/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:00:39 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/30 19:06:54 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_valid_unsigned_int(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i] != '\0')
	{
		if (nbr[i] < 48 || nbr[i] > 57)
		{
			return (0);
		}
		i++;
	}
	if (i > 10)
	{
		return (0);
	}
	return (1);
}

int	ft_get_size_dict(char *filename)
{
	int		fd;
	int		size;
	char	*buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	buf = (char *) malloc(sizeof(char));
	if (!buf)
	{
		return (-1);
	}
	size = 0;
	while (read(fd, buf, 1))
	{
		size++;
	}
	free(buf);
	close(fd);
	return (size);
}

char	*ft_read_content_dict(char *filename, int size)
{
	int		fd;
	char	*buf;

	fd = open(filename, O_RDONLY);
	buf = (char *) malloc(sizeof(char) * (size + 1));
	read (fd, buf, size);
	close(fd);
	buf[size - 1] = '\0';
	return (buf);
}
