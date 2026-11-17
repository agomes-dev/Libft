/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrefe2 <andrefe2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:36:15 by andrefe2          #+#    #+#             */
/*   Updated: 2026/11/17 15:17:14 by andrefe2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	 print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main(void)
{
	t_list *head;
	t_list *second;

	head = ft_lstnew("Porto");
	second = ft_lstnew("Braga");
	head->next = second;
	ft_lstiter(head, print_content);
	return (0);
}
*/
