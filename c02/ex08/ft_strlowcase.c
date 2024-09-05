/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 11:38:09 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
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
	char str8[] = "non\nprintable";
	char str9[] = "del character \177";

	printf("%s\n", ft_strlowcase(str0));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	printf("%s\n", ft_strlowcase(str6));
	printf("%s\n", ft_strlowcase(str7));
	printf("%s\n", ft_strlowcase(str8));
	printf("%s\n", ft_strlowcase(str9));
}
*/
