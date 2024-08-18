/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsouza-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:19:42 by fsouza-d          #+#    #+#             */
/*   Updated: 2024/08/15 15:19:33 by fsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	b = 0;
	i = 0;
	while (*dest != '\0' && (i <= nb))
	{
		dest++;
		i++;
	}
	while (*src != '\0' && (b <= nb))
	{
		*dest = *src;
		dest++;
		src++;
		b++;
	}
	*dest = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			dest[15] = "ola ze ";
	char			src[] = " eu sou jhon";
	unsigned int	nb;

	nb = 5;
	ft_strncat(dest, src, nb);
	printf ("%s\n", dest);
}*/
