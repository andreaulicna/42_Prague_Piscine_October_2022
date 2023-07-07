/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:30:04 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/18 12:02:21 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_numeric(char *s)
{
	if (!('a' <= *s && *s <= 'z')
		&& !('A' <= *s && *s <= 'Z')
		&& !('0' <= *s && *s <= '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (!(ft_is_alpha_numeric(&str[i - 1]))
			&& ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if ((ft_is_alpha_numeric(&str[i - 1]))
			&& ('A' <= str[i] && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (&str[0]);
}
