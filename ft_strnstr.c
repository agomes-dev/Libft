/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:04:00 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:52:25 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*b;
	unsigned char	*l;
	size_t			i;
	size_t			j;

	b = (unsigned char *)big;
	l = (unsigned char *)little;
	i = 0;
	j = 0;
	if (l[i] == '\0')
		return ((char *)&b[i]);
	while (b[i] != '\0' && i < len)
	{
		if (b[i] == l[j])
		{
			while (b[i + j] == l[j] && l[j] != '\0')
				j++;
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s\n", ft_strnstr("wo word", "ord",12 ));
	//printf("%s\n", strnstr("anredre", "\0", 4));
	printf("%s\n", ft_strnstr("andrreparre", "rre", 12));
	//printf("%s\n", strnstr("andrreparre", "rre", 12));
}*/
