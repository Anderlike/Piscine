/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:49:49 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/01/31 17:13:50 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	cap;
	int	i;

	cap = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 40 && str[i] <= 58)
			|| (str[i] >= 91 && str[i] <= 96) || str[i] > 122)
			cap = 1;
		else
		{
			if (cap)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
				cap = 0;
			}
		}
		i++;
	}
	return (str);
}
