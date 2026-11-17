/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:48:43 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:16:37 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	t_list *first;
	t_list *new_node;

	first = ft_lstnew("Porto");
	new_node = ft_lstnew("42");

	printf("Antes: %s\n\n", (char *)first->content);

	ft_lstadd_front(&first, new_node);

	printf("Primeiro: %s\n", (char *)first->content);
	printf("Segundo: %s\n", (char *)first->next->content);

	return (0);
}
*/
