/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:02:17 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/16 16:06:28 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size == 0 || nmemb == 0)
		return (malloc(1));
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
/*
int	main(void)
{
	int	*a;

	a = ft_calloc(5, sizeof (int));
	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
	printf("%d, %d, %d, %d, %d\n", a[0], a[1], a[2], a[3], a[4]);
}
*/
