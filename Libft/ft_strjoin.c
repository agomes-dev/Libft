/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:43:13 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/10 14:35:56 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sa;
	size_t	sb;
	char	*array;

	sa = ft_strlen(s1);
	sb = ft_strlen(s2);
	array = malloc((sa + sb + 1) * sizeof (char));
	if (!array)
		return (NULL);
	ft_strlcpy(array, s1, (sa + 1));
	ft_strlcat(array, s2, (sa + sb + 1));
	return (array);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("ANDRE", "12345"));
}*/
