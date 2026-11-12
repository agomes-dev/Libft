/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:54:24 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:59:25 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	int				i;

	i = 0;
	target = (unsigned char)c;
	while ((unsigned char)s[i] != '\0')
		i++;
	if (target == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if ((unsigned char)s[i] == target)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "Carro";
	int	a;

	a = 'r';
	printf("%s\n", ft_strrchr(s, a));
	printf("%s\n", strrchr(s, a));

	printf("(%s)\n", ft_strrchr(s, '\0'));
	printf("(%s)\n", strrchr(s, '\0'));


	printf("%s\n", ft_strrchr(s, '9'));
	printf("%s\n", strrchr(s, '9'));
}*/
