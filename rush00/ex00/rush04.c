/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:17:28 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/14 14:14:09 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	write_line(int x, char c_begin, char c_center, char c_end)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(c_begin);
		else if (i == x - 1)
			ft_putchar(c_end);
		else
			ft_putchar(c_center);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 0 || y < 0)
		return ;
	i = 0;
	while (i < y)
	{
		if (i == 0)
			write_line(x, 'A', 'B', 'C');
		else if (i > 0 && i < y - 1)
			write_line(x, 'B', ' ', 'B');
		else if (i == y - 1)
			write_line(x, 'C', 'B', 'A');
		i++;
	}
}
