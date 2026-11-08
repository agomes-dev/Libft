/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:58:24 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:59:09 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (size < i)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && (j + i + 1 < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char strs [] = "Hello";
	char strd [] = "ZAU";
	size_t	i;
	size_t	j;

	i = ft_strlcat(strd, strs, 4);
	j = strlcat(strd, strs, 4);

	printf("%s\n", strd);
	printf("%zu\n", i);
	printf("%zu\n", j);

}*/
