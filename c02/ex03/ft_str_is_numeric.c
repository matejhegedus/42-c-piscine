/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 14:48:43 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char str0[] = "";
	char str1[] = "alphabetical";
	char str2[] = "AlPhaBetiCalzzZZ";
	char str3[] = "With a space";
	char str4[] = "between]]]]";
	char str5[] = "}}}}";
	char str6[] = "num123ber";
	char str7[] = "95451280";
	char str8[] = "###";

	printf("%d\n", ft_str_is_numeric(str0));
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	printf("%d\n", ft_str_is_numeric(str4));
	printf("%d\n", ft_str_is_numeric(str5));
	printf("%d\n", ft_str_is_numeric(str6));
	printf("%d\n", ft_str_is_numeric(str7));
	printf("%d\n", ft_str_is_numeric(str8));
}
*/
