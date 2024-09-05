/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusic <mmusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:45:08 by mmusic            #+#    #+#             */
/*   Updated: 2024/07/21 10:11:29 by mmusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int		ft_atoi(char str);
bool	check_input(char *input);
void	create_perm_arr(int permutations[][3]);
void	find_possible_rows(int in[][4], int permutations[][3], int row_num,
			int possible_comb[][8]);
void	write_correct_solution(int r[]);
int		check_solution(int r[], int in[][4], int permut[][3]);

int	solution2(int comb[][8], int in[][4], int permutes[][3], int *indices)
{
	int	l;
	int	r[4];

	l = 0;
	while (comb[3][l] != 0 && l < 8)
	{
		r[0] = comb[0][indices[0]];
		r[1] = comb[1][indices[1]];
		r[2] = comb[2][indices[2]];
		r[3] = comb[3][l];
		if (check_solution(r, in, permutes))
		{
			write_correct_solution(r);
			return (1);
		}
		l++;
	}
	return (0);
}

void	solution1(int comb[][8], int in[][4], int permutations[][3])
{
	int	indices[3];

	indices[0] = 0;
	while (comb[0][indices[0]] != 0 && indices[0] < 8)
	{
		indices[1] = 0;
		while (comb[1][indices[1]] != 0 && indices[1] < 8)
		{
			indices[2] = 0;
			while (comb[2][indices[2]] != 0 && indices[2] < 8)
			{
				if (solution2(comb, in, permutations, indices))
					return ;
				indices[2]++;
			}
			indices[1]++;
		}
		indices[0]++;
	}
	write(1, "Error\n", 6);
}

void	array_create(int in[][4])
{
	int	permutations[24][3];
	int	possible_rows[4][8];
	int	i;

	i = 0;
	create_perm_arr(permutations);
	while (i < 4)
	{
		find_possible_rows(in, permutations, i, possible_rows);
		i++;
	}
	solution1(possible_rows, in, permutations);
}

void	rush(char **a)
{
	int	in[4][4];
	int	i;
	int	in_r;
	int	in_c;

	i = 0;
	in_r = 0;
	in_c = 0;
	while (a[1][i] != '\0' && i < 32 && in_r < 4)
	{
		in_c = 0;
		while (in_c < 4)
		{
			in[in_r][in_c] = ft_atoi(a[1][i]);
			i += 2;
			in_c++;
		}
		in_r++;
	}
	array_create(in);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check_input(argv[1]))
		{
			rush(argv);
		}
		else
		{
			write(1, "Error\n", 6);
		}
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
