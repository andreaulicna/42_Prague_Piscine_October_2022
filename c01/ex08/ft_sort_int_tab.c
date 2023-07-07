/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:46:29 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/16 13:30:23 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	round_check;
	int	counter;
	int	tmp;

	round_check = 1;
	while (round_check < size)
	{
		counter = 0;
		while (counter < size - 1)
		{
			if (!(tab[counter] < tab[counter + 1]))
			{
				tmp = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = tmp;
			}
			++counter;
		}
		++round_check;
	}
}
