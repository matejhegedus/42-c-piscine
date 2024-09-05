/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmusic <mmusic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:23:39 by mmusic            #+#    #+#             */
/*   Updated: 2024/07/21 10:09:37 by mmusic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_atoi(char str)
{
	int	i;
	int	len;
	int	out;

	len = 1;
	out = 0;
	i = 0;
	if (str >= '0' && str <= '9')
	{
		out += str % '0';
		i++;
	}
	return (out);
}
