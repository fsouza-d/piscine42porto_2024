/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsouza-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:37:01 by fsouza-d          #+#    #+#             */
/*   Updated: 2024/08/06 14:42:53 by fsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 2;
	int b = 2;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf ("%d / %d = %d\n", a, b, div);
	printf ("%d %% %d = %d", a, b, mod);
}*/
