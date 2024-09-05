/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:27:52 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/22 13:04:59 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *c)
{
	int	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
	{
		if (dest_len == size)
			return (size);
		dest_len++;
	}
	i = 0;
	while (src[i] && ((dest_len + i) < (size - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "String one\0Blablabla";
	char src[] = "String2";

	printf("src: %s\ndest: %s\n", src, dest);
	printf("%u\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("src: %s\ndest: %s\n", src, dest);
}
*/
