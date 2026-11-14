/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:25:39 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/14 12:33:52 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		if (f != NULL)
			new_node = lstnew(f(lst->content));
		else
			new_node = lstnew(lst->content)
		if (new_node == NULL)
		{
			lstclear(&new_list, del(lst->content));
			return (NULL);
		}
		lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
}

