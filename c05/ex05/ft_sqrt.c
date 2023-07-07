/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:01:37 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 21:35:50 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recursive(int nb, int i)
{
	if ((long) i * i > nb)
	{
		return (0);
	}
	else if ((long) i * i == nb)
	{
		return (i);
	}
	else
	{
		return (ft_sqrt_recursive(nb, i + 1));
	}
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 0));
}
//int ft_sqrt(int nb)
//{
//	int i;
//	int result;
//
//	if(nb > 0)
//	{
//		i = 0;
//		result = 1;
//		while (i != result)
//		{
//			i++;
//			result = nb / i;
//
//			if (i * i > nb)
//			{
//				return (0);
//			}
//		}
//		return (result);
//	}
//	else
//	{
//		return (0);
//	}
//}
