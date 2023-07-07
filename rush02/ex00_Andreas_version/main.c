/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:38:59 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/30 19:22:45 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_functions.h"
#include "solver_functions.h"

void	ft_solve_two_argc(char **argv)
{
	char	*buf;
	char	*f_name;
	char	*number;
	char	*store;
	int		size;

	store = malloc(sizeof(char) * 1000);
	store[999] = '\0';
	number = malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	f_name = malloc(sizeof(char) * 13);
	number = argv[1];
	f_name = "numbers.dict";
	size = ft_get_size_dict(f_name);
	buf = ft_read_content_dict(f_name, size);
	store = number_into_words(number, buf, store);
	ft_putstr(store);
	free(store);
}

void	ft_solve_three_argc(char **argv)
{
	char	*buf;
	char	*f_name;
	char	*number;
	char	*store;
	int		size;

	store = malloc(sizeof(char) * 1000);
	store[999] = '\0';
	number = malloc(sizeof(char) * (ft_strlen(argv[2]) + 1));
	f_name = malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
	number = argv[2];
	f_name = argv[1];
	size = ft_get_size_dict(f_name);
	buf = ft_read_content_dict(f_name, size);
	store = number_into_words(number, buf, store);
	ft_putstr(store);
	free(store);
}

int	main(int argc, char **argv)
{
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
		ft_solve_two_argc(argv);
	}
	else
	{
		if (ft_is_valid_unsigned_int(argv[2]) == 0)
		{
			ft_putstr("Error\n");
			return (1);
		}
		ft_solve_three_argc(argv);
	}
	return (0);
}
