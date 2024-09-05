/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:14:05 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/15 18:47:07 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	array[7] = {1, 2, 3, 4, 5, 6, 7};
	int	i;
	int size;
   
	size = 7;
	i = 0;
	while(i < size)
    {
        printf("%d ", array[i]);
		i++;
    }
	printf("\n");
	ft_rev_int_tab(array, size);
	i = 0;
	while(i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}
*/
