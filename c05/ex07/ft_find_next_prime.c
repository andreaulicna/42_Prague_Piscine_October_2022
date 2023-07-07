/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:05:07 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 21:11:30 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_recursive(int nb, int i)
{
	if ((long) i * i > nb)
	{
		return (1);
	}
	else if (nb % i == 0)
	{
		return (0);
	}
	return (ft_is_prime_recursive(nb, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
	{
		return (0);
	}
	return (ft_is_prime_recursive(nb, 2));
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	else
	{
		return (ft_find_next_prime(nb + 1));
	}
}
