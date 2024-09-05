/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:51:16 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/15 17:19:36 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp_nbr;

	temp_nbr = *a;
	*a = *b;
	*b = temp_nbr;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		min = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < min)
			{
				min = tab[j];
				min_index = j;
			}
			j++;
		}
		ft_swap(&tab[min_index], &tab[i]);
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
    int	size = 7;
	int array[7] = {46, 93, 24, 52, 82, 71, 55};
    int i;

    i = 0;
    while(i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    ft_sort_int_tab(array, size);
    i = 0;
    while(i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
}
*/
