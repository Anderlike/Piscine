/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:37:59 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/02/12 14:48:48 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	count_char(int size, char **strs)
{
	int	i;
	int	x;
	int	total_char;

	total_char = 0;
	i = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x] != 0)
		{
			total_char++;
			x++;
		}
		i++;
	}
	return (total_char);
}

void	ft_strcpy(int pos, char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != 0)
	{
		s1[pos] = s2[i];
		i++;
		pos++;
	}
}

char	*ft_empty_string(void)
{
	char	*string;

	string = (char *)malloc(1);
	string[0] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		y;
	char	*str;

	if (size == 0)
		return (ft_empty_string());
	str = (char *)malloc(count_char(size, strs) + ((size - 1) * str_len(sep))
			+ 1);
	i = 0;
	y = 0;
	while (i < size)
	{
		ft_strcpy(y, str, strs[i]);
		y = y + str_len(strs[i]);
		if (i < (size - 1))
		{
			ft_strcpy(y, str, sep);
			y = y + str_len(sep);
		}
		i++;
	}
	str[y] = '\0';
	return (str);
}
