/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:59:52 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:17:04 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del_content(void *content)
{
free(content);
}
int main(void)
{
	t_list *head;
	t_list *second;

	head = ft_lstnew(ft_strdup("42"));
	second = ft_lstnew(ft_strdup("Porto"));

	head->next = second;

	printf("Antes: %u nós\n", ft_lstsize(head));

	ft_lstdelone(head, del_content);
	head = second;

	printf("Depois: %u nós\n", ft_lstsize(head));
	printf("Restante: %s\n", (char *)head->content);

	ft_lstclear(&head, del_content);
	return (0);
}
*/
