/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:13:30 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/10 14:33:31 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*array;
	size_t	i;

	i = 0;
	array = malloc((len + 1) * sizeof (char));
	if (!array)
		return (NULL);
	while (len > 0)
	{
		array[i] = s[start + i];
		i++;
		len--;
	}
	array[start + i] = '\0';
	return (array);
}
/*		
int	main(void)
{
	printf("%s\n", ft_substr("ANDRE", 1, 2);
}*/	
