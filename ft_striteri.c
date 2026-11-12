/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:14:32 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/12 10:23:53 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void ft_change(unsigned int i, char *str)
{
	if (i == 1)
		*str = *str + 32;
}
/*
int	main(void)
{
	char str[] = "HELLO";

	ft_striteri(str, ft_change);
	printf("%s", str);
}*/
