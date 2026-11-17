/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:04:00 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:19:26 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[i]);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && j < len - i)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
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
}
*/
