/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 15:02:48 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char str7[] = "UPPERCASEWORDZ";

	printf("%d\n", ft_str_is_uppercase(str0));
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	printf("%d\n", ft_str_is_uppercase(str4));
	printf("%d\n", ft_str_is_uppercase(str5));
	printf("%d\n", ft_str_is_uppercase(str6));
	printf("%d\n", ft_str_is_uppercase(str7));
}
*/
