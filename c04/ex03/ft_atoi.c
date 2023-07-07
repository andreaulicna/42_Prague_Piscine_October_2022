/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:53:34 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/26 19:36:45 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	value_to_return(char *str)
{
	int	i;
	int	to_return;

	i = 0;
	to_return = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		to_return = to_return * 10 + (str[i] - '0');
		i++;
	}
	return (to_return);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r' ))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	if ('0' <= str[i] && str[i] <= '9')
	{
		return (value_to_return(&str[i]) * sign);
	}
	else
	{
		return (0);
	}
}
