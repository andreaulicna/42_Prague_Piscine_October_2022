/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:38:59 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/30 18:36:14 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "our_functions.h"

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

int	main(int argc, char **argv)
{
	int		size;
	char	*buf;
	char	*f_name;
	char	*store;
	char	*number;

	store = malloc(sizeof(char) * 1000);
	store[999] = '\0';
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		if (ft_is_valid_unsigned_int(argv[1]) == 0)
		{
			ft_putstr("Error\n");
			return (1);
		}
		number = malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
		f_name = malloc(sizeof(char) * 13);
		number = argv[1];
		f_name = "numbers.dict";
	}
	else
	{
		if (ft_is_valid_unsigned_int(argv[2]) == 0)
		{
			ft_putstr("Error\n");
			return (1);
		}
		number = malloc(sizeof(char) * (ft_strlen(argv[2]) + 1));
		f_name = malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
		number = argv[2];
		f_name = argv[1];
	}
	size = ft_get_size_dict(f_name);
	buf = ft_read_content_dict(f_name, size);
	store = number_into_words(number, buf, store);
	ft_putstr(store);
	free(store);
	return (0);
}
