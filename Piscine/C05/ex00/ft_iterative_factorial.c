/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:05:37 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/01/31 14:56:54 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb)
	{
		temp *= i;
		i++;
	}
	return (temp);
}
