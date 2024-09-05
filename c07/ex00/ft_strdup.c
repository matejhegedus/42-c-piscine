/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <mhegedus@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:58:06 by mhegedus          #+#    #+#             */
/*   Updated: 2024/08/01 19:31:13 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 0;
	while (str[char_count] != '\0')
		char_count++;
	return (char_count);
}

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

char	*ft_strdup(char *src)
{
	int		len;
	char	*new_str;

	len = ft_strlen(src);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	return (ft_strcpy(new_str, src));
}

#include <stdio.h>
int	main(void)
{
	char str[] = "abcdefgh";
	char *new_str;

	new_str = ft_strdup(str);
	printf("%s\n", new_str);
}
