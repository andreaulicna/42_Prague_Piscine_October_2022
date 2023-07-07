/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:41:21 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/26 18:44:47 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array_to_return;
	int	i;

	if (min >= max)
	{
		array_to_return = (int *) 0;
		return (array_to_return);
	}
	size = max - min;
	array_to_return = (int *) malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		array_to_return[i] = min + i;
		i++;
	}
	return (array_to_return);
}
