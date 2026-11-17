/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:54:24 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:43:22 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	target;
	char			*last;
	int				i;

	i = 0;
	last = NULL;
	target = (unsigned char)c;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == target)
			last = ((char *)&s[i]);
		i++;
	}
	if (target == '\0')
		return ((char *)&s[i]);
	return (last);
}
/*
int	main(void)
{
	char s[] = "Carro";
	int	a;

	a = 'r';
	printf("%s\n", ft_strrchr(s, a));
	printf("%s\n", strrchr(s, a));

	printf("%s\n", ft_strrchr(s, '\0'));
	printf("%s\n", strrchr(s, '\0'));


	printf("%s\n", ft_strrchr(s, '9'));
	printf("%s\n", strrchr(s, '9'));
}
*/
