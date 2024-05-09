/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:41:29 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/02/01 13:18:43 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	error(char *base, int *error)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if ((base[i] > 'Z' && base[i] < 'a') || (base[i] > '9' && base[i] < 'A')
			|| base[i] < '0' || base[i] > 'z')
			*error = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	wr;

	i = 0;
	wr = 0;
	error(base, &wr);
	if (nbr < 0 && wr != 1)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (base[i] && wr != 1)
		i++;
	if (nbr < i && wr != 1)
		ft_putchar(base[nbr]);
	if (nbr >= i && wr != 1)
	{
		ft_putnbr_base(nbr / i, base);
		ft_putnbr_base(nbr % i, base);
	}
}
