/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:34:05 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/13 18:41:41 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//JUST FOR TESTING
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_nbr;

	temp_nbr = *a;
	*a = *b;
	*b = temp_nbr;
}

//JUST FOR TESTING
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 99;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
}
*/
