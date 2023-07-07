/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:28:01 by aulicna           #+#    #+#             */
/*   Updated: 2022/11/03 18:53:33 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words_str(char *str, char *charset)
{
	int	i;
	int	n_wrd;

	i = 0;
	n_wrd = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i + 1], charset) == 1
			&& is_separator(str[i], charset) == 0)
		{
			n_wrd++;
		}
		i++;
	}
	return (n_wrd);
}

void	fill_2d_array(char *sub_arr, char *str, char *charset)
{
	int	i;

	i = 0;
	while (is_separator(str[i], charset) == 0)
	{
		sub_arr[i] = str[i];
		i++;
	}
	sub_arr[i] = '\0';
}

void	allocate_2d_array(char **array, char *str, char *charset)
{
	int	i;
	int	j;
	int	n_wrd;

	i = 0;
	n_wrd = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], charset) == 1)
		{
			i++;
		}
		else
		{
			j = 0;
			while (is_separator(str[i + j], charset) == 0)
			{
				j++;
			}
			array[n_wrd] = (char *)malloc(sizeof(char) * (j + 1));
			fill_2d_array(array[n_wrd], &str[i], charset);
			i += j;
			n_wrd++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		n_wrd;

	n_wrd = count_words_str(str, charset);
	array = (char **)malloc(sizeof(char *) * (n_wrd + 1));
	array[n_wrd] = 0;
	allocate_2d_array(array, str, charset);
	return (array);
}
//#include <stdio.h>
//int	main(void)
//{
//	char	**array;
//	char	*str = "Hello hi,he:llo ,hi";
//	char	*charset = " ,:";
//
//	array = ft_split(str, charset);
//	int	i = 0;
//	while (i < 7)
//	{
//		printf("%s", array[i]);
//		printf("\n");
//		i++;
//	}
//
//	return (0);
//}
