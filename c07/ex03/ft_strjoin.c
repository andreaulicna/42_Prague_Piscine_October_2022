/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:15:14 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/27 17:58:36 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (&dest[0]);
}

int	ft_count_total_size(int size, char **strs, int len_sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			total_len += len_sep;
		}
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*joined_str;

	if (size == 0)
	{
		joined_str = (char *) malloc(sizeof(char) * (size + 1));
		joined_str[0] = '\0';
		return (joined_str);
	}
	total_size = ft_count_total_size(size, strs, ft_strlen(sep));
	joined_str = (char *) malloc(sizeof(char *) * (total_size + 1));
	if (!joined_str)
		return (0);
	joined_str[0] = '\0';
	i = 0;
	while (i < size)
	{
		joined_str = ft_strcat(joined_str, strs[i]);
		if (i != size - 1)
			joined_str = ft_strcat(joined_str, sep);
		i++;
	}
	return (joined_str);
}
