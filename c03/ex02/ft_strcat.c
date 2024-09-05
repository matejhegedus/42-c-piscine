/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:27:52 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 13:16:53 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "Second stR\0Blablabla";
	char src[] = "String1";

	printf("src: %s\ndest: %s\n", src, dest);
	ft_strcat(dest, src);
	printf("src: %s\ndest: %s\n", src, dest);
}
*/