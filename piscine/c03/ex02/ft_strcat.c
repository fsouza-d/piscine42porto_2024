/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsouza-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:57:15 by fsouza-d          #+#    #+#             */
/*   Updated: 2024/08/15 13:03:34 by fsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	char	*m;

	m = dest;
	while (*m != '\0')
	{
		m++;
	}
	while (*src != '\0')
	{
		*m = *src;
		m++;
		src++;
	}
	*m = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[15] = "ola ";
	char	src[] = "hello";

	ft_strcat(dest, src);
	printf ("%s\n", dest);
}*/
