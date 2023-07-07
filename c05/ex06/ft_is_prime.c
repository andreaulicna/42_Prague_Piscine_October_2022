/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:24:45 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 21:00:53 by aulicna          ###   ########.fr       */
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
//{
//	int	i;
//
//	if (nb == 0 || nb == 1)
//	{
//		return (0);
//	}
//	else
//	{
//		i = 2;
//		while (i <= nb / 2)
//		{
//			if (nb % i == 0)
//			{
//				return (0);
//			}
//			i++;
//		}
//		return (1);
//	}
//}
