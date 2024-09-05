/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:00:08 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/15 14:12:34 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 0;
	while (*str != '\0')
	{
		char_count++;
		str++;
	}
	return (char_count);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str;

	str = "Nice";
	printf("%d", ft_strlen(str));
}
*/
