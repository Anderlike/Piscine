/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:21:55 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/02/15 13:24:15 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	*ptr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (-1);
	*range = ptr;
	count = 0;
	while (count < (max - min))
	{
		ptr[count] = count + min;
		count++;
	}
	return (max - min);
}
