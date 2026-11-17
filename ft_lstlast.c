/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:43:59 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:17:25 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	t_list *first;
	t_list *second;
	t_list *third;
	t_list *last;

	first = ft_lstnew("42");
	second = ft_lstnew("Porto");
	third = ft_lstnew("Hello");

	first->next = second;
	second->next = third;

	last = ft_lstlast(first);
	printf("Ultimo no: %s\n", (char *)last->content);

	return (0);
}
*/
