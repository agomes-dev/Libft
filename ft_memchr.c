/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:20:08 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/16 16:21:53 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*m;
	unsigned char	target;
	size_t			i;

	m = (unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (m[i] == target)
			return ((void *)&m[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
/*
int	main(void)
{
	int	a;
	int	d[] = {1, 2, 3, 4, 5};

	a = 8;

	if (ft_memchr(d, a, sizeof(d)))
		printf("%d\n", *(int *)ft_memchr(d, a, sizeof(d)));
	else
		printf("Not found\n");
	if (memchr(d, a, sizeof(d)))
		printf("%d\n", *(int *)memchr(d, a, sizeof(d)));
	else
		printf("Not found\n");
}
*/
