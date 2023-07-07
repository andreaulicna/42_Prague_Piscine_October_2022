/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:29:33 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/22 12:46:55 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_argv(char **argv, int size)
{
	char	*tmp;
	int		round_check;
	int		counter;

	round_check = 1;
	while (round_check < size)
	{
		counter = 1;
		while (counter < size)
		{
			if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
			{
				tmp = argv[counter];
				argv[counter] = argv[counter + 1];
				argv[counter + 1] = tmp;
			}
			++counter;
		}
		++round_check;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_argv(argv, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
