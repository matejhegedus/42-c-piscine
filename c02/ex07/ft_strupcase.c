/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 17:25:06 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
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

	printf("%s\n", ft_strupcase(str0));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	printf("%s\n", ft_strupcase(str6));
	printf("%s\n", ft_strupcase(str7));
	printf("%s\n", ft_strupcase(str8));
	printf("%s\n", ft_strupcase(str9));
}
*/
