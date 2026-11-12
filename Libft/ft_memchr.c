/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:20:08 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:58:34 by andrefe2         ###   ########.fr       */
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
	while ((m[i] != '\0') && (i < n))
	{
		if (m[i] == target)
			return ((void *)&m[i]);
		i++;
	}
	if ((m[i] == '\0') && (target == '\0'))
		return ((void *)&m[i]);
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	int	a;
	size_t	b;
	char	d[] = "Carro";

	a = '\0';
	b = 6;

	printf("%s\n", (char *)ft_memchr(d, a, b));
	printf("%s\n", (char *)memchr(d, a, b));

}*/
