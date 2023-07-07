/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:49:58 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/16 22:35:34 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char start, char middle, char end, int width)
{
	int	pst_in_line;

	pst_in_line = 1;
	while (pst_in_line <= width)
	{
		if (pst_in_line == 1)
		{
			ft_putchar(start);
		}
		else if (1 < pst_in_line && pst_in_line < width)
		{
			ft_putchar(middle);
		}
		else if (pst_in_line == width)
		{
			ft_putchar(end);
		}
		++pst_in_line;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	len_counter;

	if (x <= 0 || y <= 0)
		write(1, "There is a mistake in the function's input", 42);
	else
	{
		len_counter = 1;
		while (len_counter <= y)
		{
			if (len_counter == 1)
			{
				print_line('/', '*', '\\', x);
			}
			else if (1 < len_counter && len_counter < y)
			{
				print_line('*', ' ', '*', x);
			}
			else
			{
				print_line('\\', '*', '/', x);
			}
			++len_counter;
		}
	}	
}
