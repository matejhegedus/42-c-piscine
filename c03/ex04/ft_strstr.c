/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:56:30 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/22 13:36:50 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_substrcmp(char *substr, char *str)
{
	int	i;

	i = 0;
	while (substr[i])
	{
		if (substr[i] - str[i] != 0)
			return (substr[i] - str[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_substrcmp(to_find, &str[i]) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("This is a test string", "test"));
}
*/
