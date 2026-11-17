/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 22:37:57 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:16:48 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
/*
void	 del_content(void *content)
{
	free(content);
}

int main(void)
{
	t_list *head;
	t_list *second;

	head = ft_lstnew(ft_strdup("Porto"));
	second = ft_lstnew(ft_strdup("Braga"));

	head->next = second;

	printf("Antes: %u nós\n", ft_lstsize(head));

	ft_lstclear(&head, del_content);

	printf("Depois: %u nós\n", ft_lstsize(head));
	printf("Head: %s\n", (char *)head);

	return (0);
}
*/
