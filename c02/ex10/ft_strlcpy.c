/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:54:19 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 11:32:39 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str_len(src));
}

/*
#include <stdio.h>
int	main(void)
{
	char src[] = "String1!";
	char dest[] = "A longer string.";
	
	printf("src: %s\ndest: %s\n", src, dest);
	ft_strlcpy(dest, src, 5);
	printf("src: %s\ndest: %s\n", src, dest);
	ft_strlcpy(dest, src, 9);
    printf("src: %s\ndest: %s\n", src, dest);
	ft_strlcpy(dest, src, 12);
    printf("src: %s\ndest: %s\n", src, dest);
	int i = 0;
	while (i < 16)
	{
		printf("%c", dest[i]);
		i++;
	}
}
*/
