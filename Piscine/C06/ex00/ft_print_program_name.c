/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:16:45 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/02/06 11:16:55 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc = 0;
	i = 0;
	while (argv[argc][i] != '\0')
	{
		write(1, &argv[argc][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
