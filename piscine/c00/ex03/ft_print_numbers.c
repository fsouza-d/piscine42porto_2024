/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsouza-d <fsouza-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:25:04 by fsouza-d          #+#    #+#             */
/*   Updated: 2024/08/04 12:40:59 by fsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		n++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
