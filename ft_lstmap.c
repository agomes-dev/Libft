/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 12:25:39 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:15:08 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	 *change_content(void *content)
{
	char	 *copy;

	copy = ft_strdup((char *)content);
	if (copy == NULL)
	return (NULL);
	copy[0] = 'p';
	return (copy);
}

int main(void)
{
	t_list *head;
	t_list *second;
	t_list *new_list;

	head = ft_lstnew(ft_strdup("Hello"));
	second = ft_lstnew(ft_strdup("World"));
	head->next = second;

	new_list = ft_lstmap(head, change_content, free);

	printf("Original list:\n");
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);

	printf("\nMapped list:\n");
	printf("%s\n", (char *)new_list->content);
	printf("%s\n", (char *)new_list->next->content);

	return (0);
}
*/
