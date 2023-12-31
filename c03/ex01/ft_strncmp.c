/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:31:29 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/20 13:27:22 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i <= n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
		{
			if (s1[i] > s2[i] || s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return (0);
}
