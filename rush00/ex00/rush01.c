/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nirk <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 21:46:17 by nirk              #+#    #+#             */
/*   Updated: 2024/07/13 22:21:30 by nirk             ###   ########.fr       */
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
			write_line(x, '/', '*', '\\');
		else if (i > 0 && i < y - 1)
			write_line(x, '*', ' ', '*');
		else if (i == y - 1)
			write_line(x, '\\', '*', '/');
		i++;
	}
}
