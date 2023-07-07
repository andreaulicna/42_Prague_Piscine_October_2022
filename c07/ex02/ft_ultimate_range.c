/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:31:52 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/26 19:05:12 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*int_array;
	int	i;

	if (min >= max)
	{
		range = (int **) 0;
		return (0);
	}
	size = max - min;
	int_array = (int *) malloc(sizeof(int) * size);
	if (!int_array)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		int_array[i] = min + i;
		i++;
	}
	*range = int_array;
	return (size);
}
