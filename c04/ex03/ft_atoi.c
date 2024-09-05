/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:51:29 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/22 21:38:16 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digits_to_number(char *str)
{
	int	power;
	int	result;
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	result = 0;
	power = 1;
	i = i - 1;
	while (i >= 0)
	{
		result += (str[i] - '0') * power;
		power *= 10;
		i--;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus_count;
	int	result;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	minus_count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	result = digits_to_number(&str[i]);
	if (minus_count % 2 == 1)
		return (-result);
	else
		return (result);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	// printf("%d\n", ft_atoi("\n \t\v\f\r---45679"));
}
*/