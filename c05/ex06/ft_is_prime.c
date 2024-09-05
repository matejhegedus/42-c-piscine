/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:00:13 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/25 22:16:10 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int	main(int argc, char **argv)
{
	clock_t start, end;
    double cpu_time_used;
	// int i = 0;

	start = clock();
	ft_is_prime(2147483647);
	while (i <= 2147483647)
	{
		ft_is_prime(i);
		i++;
	}
	end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("took %f seconds\n", cpu_time_used);
	
	if (argc == 2)
	{
		printf("%d", ft_is_prime(atoi(argv[1])));
	}

	// int i;

	// i = 0;
	// while (i < 2000000)
	// {
	// 	if (ft_is_prime(i))
	// 		printf("%d\n", i);
	// 	i++;
	// }
}
*/