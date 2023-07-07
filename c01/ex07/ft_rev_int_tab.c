/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:58:28 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/16 12:31:04 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	counter = 0;
	while (counter < size / 2)
	{
		tmp = tab[counter];
		tab[counter] = tab[size - (counter + 1)];
		tab[size - (counter + 1)] = tmp;
		++counter;
	}
}
