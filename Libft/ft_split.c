/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 10:43:40 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/12 15:03:25 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words (const char *str, char sep)
{
	size_t	i;
	size_t count;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sep && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != sep && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	free_words(char **marray, size_t count)
{
	while (count > 0)
	{
		count--;
		free(marray[count]);
	}
	free(marray);
	return (0);
}

static int	write_words(const char *str, char **marray, char sep)
{
	size_t	i;
	size_t	start;
	size_t count;
	
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == sep && str[i] != '\0')
			i++;
		start = i;
		while (str[i] != sep && str[i] != '\0')
			i++;
		if (i > start)
		{
        	marray[count] = ft_substr(str, start, i - start);
			if (marray[count] == (NULL))
			{
				free_words(marray, count);	
				return (0);
			}
			count++;
		}
	}
	return (1);
}

char **ft_split(char const *s, char c)
{
	size_t	words;
	char	**marray;
	int		result;
	
	words = count_words(s, c);
	marray = malloc((words + 1) * sizeof (char *));
	if (!marray)
		return (NULL);
	result = write_words(s, marray, c);
	if (result == 0)
		return (NULL);
	marray[words] = NULL;
	return (marray);
}
/*	
int	main(void)
{
	char *str = "AAAA,EEEE,II,OO";
	char **array;
	size_t	count;

	array = ft_split(str, ',');
	count = 0;
	while (array[count] != NULL)
	{
		printf("palavra %zu : %s\n", count, array[count]);
		count++;
	}
	return (0);
}*/	
