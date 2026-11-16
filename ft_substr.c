/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:13:30 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/16 15:21:53 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	array = malloc((len + 1) * sizeof (char));
	if (!array)
		return (NULL);
	ft_strlcpy(array, s + start, len + 1);
	return (array);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("ANDRE", 1, 20));
}
*/
