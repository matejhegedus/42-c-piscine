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

int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
		char_count++;
	return (char_count);
}

int	ft_contains_duplicates_plusminus_whtspc(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}

int	char_pos_in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	digits_to_number(char *str, char *base, int base_num)
{
	int	power;
	int	result;
	int	i;

	i = 0;
	while (char_pos_in_string(str[i], base) != -1)
		i++;
	result = 0;
	power = 1;
	i = i - 1;
	while (i >= 0)
	{
		result += char_pos_in_string(str[i], base) * power;
		power *= base_num;
		i--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus_count;
	int	result;
	int	base_num;

	base_num = ft_strlen(base);
	if (base_num <= 1
		|| ft_contains_duplicates_plusminus_whtspc(base, base_num))
		return (0);
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
	result = digits_to_number(&str[i], base, base_num);
	if (minus_count % 2 == 1)
		return (-result);
	else
		return (result);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	//printf("%d\n", ft_atoi_base("\n \t\v\f\r-+-+-45679", "0123456789"));
}
*/
