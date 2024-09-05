/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:03:34 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/22 18:26:13 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("String", "String"));
	printf("%d\n", ft_strcmp("StringA", "StringB"));
	printf("%d\n", ft_strcmp("String", "String2"));
	printf("%d\n", ft_strcmp("String1", "String"));
	printf("%d\n", ft_strcmp("String", ""));
	printf("%d\n", ft_strcmp("\b", ""));
	printf("%d\n", ft_strcmp("", ""));
}
*/