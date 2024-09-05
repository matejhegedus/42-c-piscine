/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:54 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 21:32:18 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	alphanum_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (alphanum_char(str[i]))
		{
			str[i] = to_upper(str[i]);
			i++;
			while (alphanum_char(str[i]))
			{
				str[i] = to_lower(str[i]);
				i++;
			}
		}
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

	printf("%s\n", ft_strcapitalize(str0));
	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	printf("%s\n", ft_strcapitalize(str6));
	printf("%s\n", ft_strcapitalize(str7));
	printf("%s\n", ft_strcapitalize(str8));
	printf("%s\n", ft_strcapitalize(str9));
}
*/
