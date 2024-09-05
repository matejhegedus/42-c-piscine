/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_rows.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusic <mmusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:02:48 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 10:08:11 by mmusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find_possible_rows(int in[][4], int permutations[][3], int row_num,
		int possible_comb[][8])
{
	int	result_num;
	int	i;

	result_num = 0;
	i = 0;
	while (i < 8)
	{
		possible_comb[row_num][i] = 0;
		i++;
	}
	i = 0;
	while (i < 24)
	{
		if (permutations[i][1] == in[2][row_num] &&
			permutations[i][2] == in[3][row_num])
		{
			possible_comb[row_num][result_num] = permutations[i][0];
			result_num++;
		}
		i++;
	}
}
