/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:12:36 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/27 20:53:33 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == 43 || base[i] == 45 || base[i] == ' '
			|| ('\t' <= base[i] && base[i] <= '\r'))
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

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	value_to_return(char *str, char *base)
{
	int	i;
	int	j;
	int	to_return;
	int	len_base;

	i = 0;
	to_return = 0;
	len_base = ft_strlen(base);
	while (char_in_base(str[i], base))
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				to_return = to_return * len_base + j;
			}
			j++;
		}
		i++;
	}
	return (to_return);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	to_return;

	if (base_is_valid(base))
	{
		i = 0;
		sign = 1;
		while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r' ))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		to_return = value_to_return(&str[i], base);
		return (to_return * sign);
	}
	else
	{
		return (0);
	}
}
