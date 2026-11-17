/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:40:40 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:17:59 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main(void)
{
	t_list		 *first;
	t_list		 *second;
	t_list		*third;
	unsigned int	size;

	first = ft_lstnew("Andre");
	second = ft_lstnew("Gomes");
	third = ft_lstnew("Buenas");

	first->next = second;
	second->next = third;

	size = ft_lstsize(first);
	printf("Tamanho da lista: %u\n", size);

	return (0);
}
*/
