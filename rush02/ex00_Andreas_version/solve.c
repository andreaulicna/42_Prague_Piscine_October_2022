/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsimecek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:57:07 by jsimecek          #+#    #+#             */
/*   Updated: 2022/10/30 19:45:02 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "main_functions.h"

int	find_empty(char *store)
{
	int	i;

	i = 0;
	while (store[i] != '_')
	{
		i++;
	}
	return (i);
}

int	find_number(char *digit, char *buf, char *store)
{
	int	i;
	int	j;
	int	pos;

	i = -1;
	while (buf[++i] != '\0')
	{
		j = 0;
		while (digit[j] == buf[i + j])
			j++;
		if (digit[j] == '\0')
		{
			pos = find_empty(store);
			while (buf[++i - 1] != '\n')
			{
				if (buf[i] >= 'A' && buf[i] <= 'Z')
					store[pos++] = buf[i];
				else if (buf[i] >= 'a' && buf[i] <= 'z')
					store[pos++] = buf[i];
			}
			store[pos] = ' ';
			return (0);
		}
	}
	return (1);
}

int	condition(char *digit, char *buf, char *store, int len)
{
	int		i;
	int		lenght;
	char	first_one[2];
	char	first_two[3];

	i = 0;
	lenght = 0;
	while (digit[lenght] != '\0')
		lenght++;
	first_one[0] = digit[0];
	first_one[1] = '\0';
	first_two[0] = digit[0];
	first_two[1] = digit[1];
	first_two[2] = '\0';
	if (lenght == 1)
	{
		if (len != 1 && digit[0] != '0')
			find_number(first_one, buf, store);
		else if (len == 1 && digit[0] == '0')
			find_number(first_one, buf, store);
	}
	else if (lenght == 2)
	{
		if (digit[0] != '0')
			find_number(first_two, buf, store);
	}
	else if (lenght == 3)
	{
		if (digit[0] != '0')
		{
			find_number(first_one, buf, store);
			find_number("100", buf, store);
		}
	}
	else if (lenght == 4)
	{
		if (digit[0] != '0')
			find_number(first_one, buf, store);
		find_number("1000", buf, store);
	}
	else if (lenght == 5)
	{
		if (digit[0] != '0')
			find_number(first_two, buf, store);
		if (digit[0] == '1')
			find_number("1000", buf, store);
	}
	else if (lenght == 6)
	{
		if (digit[0] != '0')
		{
			find_number(first_one, buf, store);
			find_number("100", buf, store);
		}
	}
	else if (lenght == 7)
	{
		if (digit[0] != '0')
			find_number(first_one, buf, store);
		find_number("1000000", buf, store);
	}
	else if (lenght == 8)
	{
		if (digit[0] != '0')
			find_number(first_two, buf, store);
		if (digit[0] == '1')
			find_number("1000000", buf, store);
	}
	else if (lenght == 9)
	{
		if (digit[0] != '0')
		{
			find_number(first_one, buf, store);
			find_number("100", buf, store);
		}
	}
	else
	{
		if (digit[0] != '0')
			find_number(first_one, buf, store);
		find_number("1000000000", buf, store);
	}
	return (0);
}

char	*num_wrds_2(int *i, char *number, char *buf, char *store)
{
	int		j;
	int		l;
	char	*digit;

	digit = malloc(sizeof(char) * 11);
	while (number[*i] != '\0')
	{
		digit[0] = number[*i];
		j = 1;
		l = ft_strlen(number) - *i;
		while (j < l)
		{
			if ((l == 2 || l == 5 || l == 8) && number[*i] == '1')
				digit[j++] = number[++(*i)];
			else
				digit[j++] = '0';
		}
		digit[j] = '\0';
		if (condition(digit, buf, store, ft_strlen(number) == 1))
			return ("Dict Error\n");
		(*i)++;
	}
	return ("");
}

char	*number_into_words(char *number, char *buf, char *store)
{
	int		i;

	i = -1;
	while (++i < 1000)
		store[i] = '_';
	i = 0;
	num_wrds_2(&i, number, buf, store);
	i = find_empty(store);
	store[i - 1] = '\n';
	store[i] = '\0';
	return (store);
}
