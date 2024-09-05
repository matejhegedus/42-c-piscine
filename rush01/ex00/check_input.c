/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusic <mmusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:29:22 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 10:12:56 by mmusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

// checks fot the valid input from main
int		ft_strlen(char *str);

bool	check_input(char *input)
{
	int	input_size;
	int	max_row_col_counts;
	int	i;

	i = 0;
	max_row_col_counts = 4;
	input_size = (max_row_col_counts * 4) + ((max_row_col_counts * 4) - 1);
	if (ft_strlen(input) == input_size)
	{
		while (i < 31)
		{
			if (i % 2 == 0 && (input[i] < '1' || input[i] > '4'))
				return (0);
			if (i % 2 != 0 && (input[i] != ' '))
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}
