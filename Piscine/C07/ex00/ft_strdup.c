/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:39:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/02/12 16:04:42 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (src[i] != 0)
		i++;
	i++;
	dest = (char *)malloc(i);
	if (dest == NULL)
		return (0);
	while (x < i)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
