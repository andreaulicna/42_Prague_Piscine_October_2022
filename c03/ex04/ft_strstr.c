/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:44:46 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/25 14:51:02 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (&str[0]);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

//int	ft_strlen(char *str)
//{
//	int	str_len;
//
//	str_len = 0;
//	while (str[str_len] != '\0')
//	{
//		++str_len;
//	}
//	return (str_len);
//}
//
//char	*ft_strstr(char *str, char *to_find)
//{
//	int	i;
//	int	go_back;
//	int	to_find_len;
//
//	i = 0;
//	go_back = 0;
//	to_find_len = ft_strlen(to_find);
//	while (str[i] != '\0')
//	{
//		if (str[i] == to_find[i])
//		{
//			while (to_find[i] != '\0' && (str[i] == to_find[i]))
//			{
//				i++;
//				go_back++;
//			}
//		}
//		if (go_back == to_find_len)
//			return (&str[i - go_back - to_find_len - 1]);
//		else
//		{
//			i++;
//		}
//	}
//	return (0);
//}
