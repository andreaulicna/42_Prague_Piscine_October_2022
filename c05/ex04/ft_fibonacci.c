/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:46:33 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 17:00:45 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
//int	ft_fibonacci(int index)
//{
//	int f_num;
//	int s_num;
//
//	f_num = 0;
//	s_num = 1;
//	if (index == 0)
//	{
//		return (f_num);
//	}
//	else if (index < 0)
//	{
//		return (-1);
//	}
//	else
//	{
//		while (index > 1)
//		{
//			s_num = f_num + s_num;
//			f_num = s_num - f_num;
//			index--;
//		}
//	}
//	return (s_num);
//}
