/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:00:16 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/11/01 18:47:05 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*head;

	head = NULL;
	while (lst && f && del)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, elem);
		lst = lst->next;
	}
	return (head);
}
