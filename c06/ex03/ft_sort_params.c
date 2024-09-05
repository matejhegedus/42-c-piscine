/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:55:48 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/30 00:45:33 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SMALLER 1
#define SMALLER_OR_EQUAL 2

// compares 2 strings
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// writes string and new line
void	ft_putstr_newline(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

// returns the number of strings in arr that are smaller
// or "smaller or equal" depending on the option variable
int	check_smaller_equal(char **arr, int size, int i, int option)
{
	int	j;
	int	result;

	j = 0;
	result = 0;
	while (j < size)
	{
		if (option == SMALLER && ft_strcmp(arr[j], arr[i]) < 0)
			result++;
		if (option == SMALLER_OR_EQUAL && ft_strcmp(arr[j], arr[i]) <= 0)
			result++;
		j++;
	}
	return (result);
}

// prints an array of strings by ascii order, each element on new line
void	print_sort_str_arr(char **arr, int size)
{
	int	i;
	int	num_of_smaller_str;
	int	num_of_smaller_equal_str;
	int	num_of_written;

	num_of_written = 0;
	i = 0;
	while (num_of_written < size)
	{
		num_of_smaller_str = check_smaller_equal(arr, size, i, SMALLER);
		num_of_smaller_equal_str = check_smaller_equal(arr,
				size, i, SMALLER_OR_EQUAL);
		if (num_of_written >= num_of_smaller_str
			&& num_of_written < num_of_smaller_equal_str)
		{
			ft_putstr_newline(arr[i]);
			num_of_written++;
		}
		if (++i == size)
			i = 0;
	}
}

int	main(int argc, char **argv)
{
	char	**arguments;

	arguments = argv + 1;
	print_sort_str_arr(arguments, argc - 1);
}
