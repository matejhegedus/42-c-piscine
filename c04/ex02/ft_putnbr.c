/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:15:59 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/22 17:43:30 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_last_digit_rec(int nbr)
{
	int		digit;
	char	c;

	digit = nbr % 10;
	if (digit < 0)
		digit = -digit;
	c = digit + '0';
	if (nbr / 10 != 0)
		ft_write_last_digit_rec(nbr / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		write(1, "-", 1);
	ft_write_last_digit_rec(nb);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc >= 2)
		ft_putnbr(atoi(argv[1]));
	//ft_putnbr(123);
}
*/
