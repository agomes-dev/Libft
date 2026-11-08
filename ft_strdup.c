/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:17:42 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/05 18:32:58 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	*array;

	i = 0;
	while (s[i] != '\0')
		i++;
	array = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
