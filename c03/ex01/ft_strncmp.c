/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhegedus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:03:34 by mhegedus          #+#    #+#             */
/*   Updated: 2024/07/21 12:26:44 by mhegedus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("1. %d\n", ft_strncmp("String", "String", 3));
	printf("2. %d\n", ft_strncmp("String", "StrABCDEFGH", 3));
	printf("3. %d\n", ft_strncmp("SZring", "String", 3));
	printf("4. %d\n", ft_strncmp("String", "", 3));
	printf("5. %d\n", ft_strncmp("", "String", 3));
	printf("6. %d\n", ft_strncmp("\n", "\b", 3));
	printf("7. %d\n", ft_strncmp("String", "String", 0));

	char s1[] = "r";
	char s3[] = "abcdefgh";
	char s2[] = "r";
	printf("8. %d\n", ft_strncmp(s1, s2, 3));
	printf("9. %d\n", ft_strncmp(s3, s2, 3));
}
*/
