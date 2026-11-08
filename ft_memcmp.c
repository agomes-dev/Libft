/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:33:11 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:58:37 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;
	size_t			i;

	m1 = (unsigned char *)s1;
	m2 = (unsigned char *)s2;
	i = 0;
	while ((m1[i] != '\0') && (m2[i] != '\0') && (m1[i] == m2[i]) && (i < n))
		i++;
	return (m1[i] - m2[i]);
}
/*
int	main(void)
{
	char str[] = "ANDRE";
	char str1[] = "ANDRA";
//	int str[] = {1, 2,3,4,5};
//	int str1[] = {60,70,80,90,100};

	printf("%d\n", ft_memcmp(str, str1, 3));
	printf("%d\n", memcmp(str, str1, 3));
	printf("%d\n", ft_memcmp(str, str1, 6));
	printf("%d\n", memcmp(str, str1, 6));
}*/
