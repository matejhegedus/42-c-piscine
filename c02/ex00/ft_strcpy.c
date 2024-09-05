/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:54:19 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 13:13:25 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "String1!";
	char dest[] = "A longer string.";

	printf("src: %s\ndest: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("src: %s\ndest: %s\n", src, dest);
}
*/
