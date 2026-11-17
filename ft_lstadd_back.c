/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:55:55 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:16:24 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main(void)
{
	t_list *first;
	t_list *second;
	t_list *new;

	first = ft_lstnew("42");
	second = ft_lstnew("Porto");
	new = ft_lstnew("Hello");

	first->next = second;

	printf("Antes:\n");
	printf("Primeiro: %s\n", (char *)first->content);
	printf("Segundo: %s\n", (char *)first->next->content);

	ft_lstadd_back(&first, new);

	printf("\nDepois:\n");
	printf("Primeiro: %s\n", (char *)first->content);
	printf("Segundo: %s\n", (char *)first->next->content);
	printf("Terceiro: %s\n", (char *)first->next->next->content);

	return (0);
}
*/
