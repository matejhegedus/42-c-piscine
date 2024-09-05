/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksolution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusic <mmusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:27:21 by yalnaani          #+#    #+#             */
/*   Updated: 2024/07/21 09:51:29 by mmusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

void	transform_rows_to_col(int r[], int col[])
{
	col[0] = r[0] / 1000 * 1000 + r[1] / 1000 * 100 + r[2] / 1000 * 10 + r[3]
		/ 1000;
	col[1] = r[0] % 1000 / 100 * 1000 + r[1] % 1000 / 100 * 100 + r[2] % 1000
		/ 100 * 10 + r[3] % 1000 / 100;
	col[2] = r[0] % 100 / 10 * 1000 + r[1] % 100 / 10 * 100 + r[2] % 100 / 10
		* 10 + r[3] % 100 / 10;
	col[3] = r[0] % 10 * 1000 + r[1] % 10 * 100 + r[2] % 10 * 10 + r[3] % 10;
}

bool	comp_and_set_row(int col, int permutation[], int *up, int *down)
{
	if (col == permutation[0])
	{
		*up = permutation[1];
		*down = permutation[2];
		return (true);
	}
	else
		return (false);
}

int	check_solution(int r[], int in[][4], int permut[][3])
{
	int	col[4];
	int	i;
	int	j;
	int	up;
	int	down;

	transform_rows_to_col(r, col);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 24)
		{
			if (comp_and_set_row(col[i], permut[j], &up, &down))
				break ;
			j++;
		}
		if (j == 24)
			return (0);
		if (up != in[0][i] || down != in[1][i])
			return (0);
		i++;
	}
	return (1);
}

void	write_correct_solution(int r[])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = r[i] / 1000;
		j += '0';
		write(1, &j, 1);
		write(1, " ", 1);
		j = r[i] % 1000 / 100;
		j += '0';
		write(1, &j, 1);
		write(1, " ", 1);
		j = r[i] % 100 / 10;
		j += '0';
		write(1, &j, 1);
		write(1, " ", 1);
		j = r[i] % 10;
		j += '0';
		write(1, &j, 1);
		write(1, "\n", 1);
		i++;
	}
}
