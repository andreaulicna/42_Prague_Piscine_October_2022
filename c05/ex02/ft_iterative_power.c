/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:44:01 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 21:35:27 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_to_return;
	int	i;

	if (power >= 0)
	{
		i = 1;
		nb_to_return = 1;
		while (i <= power)
		{
			nb_to_return *= nb;
			i++;
		}
		return (nb_to_return);
	}
	else
	{
		return (0);
	}
}
