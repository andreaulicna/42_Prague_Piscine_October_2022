/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:49:57 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/17 18:56:45 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
	{
		++str_len;
	}
	return (str_len);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == '\0')
	{
		return (1);
	}
	while (i <= str_len - 1)
	{
		if (('0' <= str[i] && str[i] <= '9'))
		{
			i++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}
