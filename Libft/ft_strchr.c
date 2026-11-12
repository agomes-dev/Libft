/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:37:43 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/08 21:59:04 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	int				i;

	target = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == target)
			return ((char *)&s[i]);
		i++;
	}
	if (target == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Carro";
	int	a;

	a = 'b';
	printf("%s\n", ft_strchr(s, a));
	printf("%s\n", strchr(s, a));
}*/
