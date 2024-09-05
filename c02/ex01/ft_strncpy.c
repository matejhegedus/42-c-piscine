/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:54:19 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/17 14:04:22 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "String1!";
	char dest[] = "A longer string.";

	printf("src: %s\ndest: %s\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf("src: %s\ndest: %s\n", src, dest);
	ft_strncpy(dest, src, 9);
    printf("src: %s\ndest: %s\n", src, dest);
	ft_strncpy(dest, src, 12);
    printf("src: %s\ndest: %s\n", src, dest);
	int i = 0;
	while (i < 16)
	{
		printf("%c", dest[i]);
		i++;
	}
}
*/
