/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:59:31 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/27 20:59:34 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	base_is_valid(char *base)
{
	int	i;
	int	j;
	int	len_base;

	len_base = ft_strlen(base);
	if (base[0] == '\0' || len_base == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;
	unsigned int	ui_nbr;

	len_base = ft_strlen(base);
	if (base_is_valid(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= (-1);
		}
		ui_nbr = nbr;
		if (ui_nbr >= len_base)
		{
			ft_putnbr_base(ui_nbr / len_base, base);
			ft_putnbr_base(ui_nbr % len_base, base);
		}
		else
			write(1, &base[ui_nbr], 1);
	}
}
