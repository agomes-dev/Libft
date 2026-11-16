/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:14:21 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/16 12:29:46 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char	strs[] = "HIAA";
	char	strd[] = "AB";

	ft_strlcpy(strd, strs, 2);
	printf("%s\n", strd);
	printf("%zu", ft_strlcpy(strd, strs, 2));
}
*/
