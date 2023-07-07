/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:58:42 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/24 13:07:04 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	nb_to_return;

	if (nb >= 0)
	{
		nb_to_return = 1;
		while (nb > 0)
		{
			nb_to_return *= nb;
			nb--;
		}
		return (nb_to_return);
	}
	else
	{
		return (0);
	}
}
