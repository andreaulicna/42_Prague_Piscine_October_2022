/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:45:43 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/16 11:42:58 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		ft_putchar(*(str + counter));
		++counter;
	}
}
/*while (str[counter] != '\0')
{
	ft_putchar(str[counter]);
	++counter;
}*/
