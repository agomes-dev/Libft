/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 15:13:03 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:58:59 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		if (s < d)
		{
			n--;
			d[n] = s[n];
		}
		else
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	strs [] = "\0\0\0";
	char	strd [] = "\0\0\0";

	ft_memmove(strd , strs + 1, 3);
	printf("%s", strd);
}*/
