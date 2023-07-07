/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:34:14 by aulicna           #+#    #+#             */
/*   Updated: 2022/10/23 16:05:20 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(8);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (0 < nb && nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	main(void)
{
	int	square[4][4] = {{0, 0, 0, 0}, {0, 3, 4, 1}, {0, 4, 1, 2}, {0, 1, 2, 0}}; //joke
	int	input [] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int	num_rows;
	int	pst_in_row;
	int	pst_in_input;

	pst_in_input = 0;
	while (pst_in_input < 16)
	{
		if (input[pst_in_input] == 4)
		{
			if (pst_in_input < 4)
			{
				square[0][pst_in_input] = 1;
				square[1][pst_in_input] = 2;
				square[2][pst_in_input] = 3;
				square[3][pst_in_input] = 4;
			}
			else if (pst_in_input < 8)
			{
				square[3][pst_in_input - 4] = 1;
				square[2][pst_in_input - 4] = 2;
				square[1][pst_in_input - 4] = 3;
				square[0][pst_in_input - 4] = 4;
			}
			else if (pst_in_input < 12)
			{
				square[pst_in_input - 8][0] = 1;
				square[pst_in_input - 8][1] = 2;
				square[pst_in_input - 8][2] = 3;
				square[pst_in_input - 8][3] = 4;
			}
			else if (pst_in_input < 16)
			{
				square[pst_in_input - 12][3] = 1;
				square[pst_in_input - 12][2] = 2;
				square[pst_in_input - 12][1] = 3;
				square[pst_in_input - 12][0] = 4;
			}
		}
		else if (input[pst_in_input] == 1)
		{
			if (pst_in_input < 4)
			{
				square[0][pst_in_input] = 4;
			}
			else if (pst_in_input < 8)
			{
				square[3][pst_in_input - 4] = 4;
			}
			else if (pst_in_input < 12)
			{
				square[pst_in_input - 8][0] = 4;
			}
			else if (pst_in_input < 16)
			{
				square[pst_in_input - 12][3] = 4;
			}
		}
		pst_in_input++;
	}
	pst_in_input = 0;
	while (pst_in_input < 16)
	{
		if (input[pst_in_input] == 2)
		{
			if (pst_in_input < 4)
			{
				if (square[3][pst_in_input] == 4)
				{
					square[0][pst_in_input] = 3;
				}
				else if ((square[3][pst_in_input] == 2 && square[2][pst_in_input] == 3)
					|| (square[3][pst_in_input] == 3 && square[2][pst_in_input] == 2))
				{
					square[0][pst_in_input] = 1;
					square[1][pst_in_input] = 4;
				}
			}
			else if (pst_in_input < 8)
			{
				if (square[0][pst_in_input - 4] == 4)
				{
					square[3][pst_in_input - 4] = 3;
				}
				else if ((square[0][pst_in_input - 4] == 2 && square[1][pst_in_input - 4] == 3)
					|| (square[0][pst_in_input - 4] == 3 && square[1][pst_in_input - 4] == 2))
				{
					square[3][pst_in_input - 4] = 1;
					square[2][pst_in_input - 4] = 4;
				}
			}
			else if (pst_in_input < 12)
			{
				if (square[pst_in_input - 8][3] == 4)
				{
					square[pst_in_input - 8][0] = 3;
				}
				else if ((square[pst_in_input - 8][3] == 2 && square[pst_in_input - 8][2] == 3)
					|| (square[pst_in_input - 8][3] == 3 && square[pst_in_input - 8][2] == 2))
				{
					square[pst_in_input - 8][0] = 1;
					square[pst_in_input - 8][1] = 4;
				}
			}
			else if (pst_in_input < 16)
			{
				if (square[pst_in_input - 12][0] == 4)
				{
				square[pst_in_input - 12][3] = 3;
				}
				else if ((square[pst_in_input - 12][0] == 2 && square[pst_in_input - 12][1] == 3)
					|| (square[pst_in_input - 12][0] == 3 && square[pst_in_input - 12][1] == 2))
				{
					square[pst_in_input - 12][3] = 1;
					square[pst_in_input - 12][2] = 4;
				}
			}
		}
		pst_in_input++;
	}
	pst_in_input = 0;
	while (pst_in_input < 16)
	{
		if (input[pst_in_input] == 3)
		{
			if (pst_in_input < 4)
			{
				if ((square[3][pst_in_input] == 4)
					&& (square[2][pst_in_input] == 3))
				{
					square[1][pst_in_input] = 1;
					square[0][pst_in_input] = 2;
				}
				else if ((square[3][pst_in_input] == 4)
					&& (square[1][pst_in_input] == 1))
				{
					square[0][pst_in_input] = 2;
					square[2][pst_in_input] = 3;
				}
			}
			else if (pst_in_input < 8)
			{
				if ((square[0][pst_in_input - 4] == 4)
					&& (square[1][pst_in_input - 4] == 3))
				{
					square[2][pst_in_input - 4] = 1;
					square[3][pst_in_input - 4] = 2;
				}
				else if ((square[0][pst_in_input - 4] == 4)
					&& (square[2][pst_in_input - 4] == 1))
				{
					square[3][pst_in_input - 4] = 2;
					square[1][pst_in_input - 4] = 3;
				}
			}
			else if (pst_in_input < 12)
			{
				if ((square[pst_in_input - 8][3] == 4)
					&& (square[pst_in_input - 8][2] == 3))
				{
					square[pst_in_input - 8][1] = 1;
					square[pst_in_input - 8][0] = 2;
				}
				else if ((square[pst_in_input - 8][3] == 4)
					&& (square[pst_in_input - 8][1] == 1))
				{
					square[pst_in_input - 8][0] = 2;
					square[pst_in_input - 8][2] = 3;
				}
			}
			else if (pst_in_input < 16)
			{
				if ((square[pst_in_input - 12][0] == 4)
					&& (square[pst_in_input - 12][1] == 3))
				{
					square[pst_in_input - 12][2] = 1;
					square[pst_in_input - 12][3] = 2;
				}
				else if ((square[pst_in_input - 12][0] == 4)
					&& (square[pst_in_input - 12][2] == 1))
				{
					square[pst_in_input - 12][3] = 2;
					square[pst_in_input - 12][1] = 3;
				}
			}
		}
		pst_in_input++;
	}

	num_rows = 0;
	while (num_rows < 4)
	{
		pst_in_row = 0; 
		while (pst_in_row < 4)
		{
			ft_putnbr(square[num_rows][pst_in_row]);
			ft_putchar(' ');
			pst_in_row++;
		}
		ft_putchar('\n');
		num_rows++;
	}

}
