/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:58:03 by iraqi             #+#    #+#             */
/*   Updated: 2021/11/19 16:35:44 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nelement;

	nlist = NULL;
	while (lst)
	{
		nelement = ft_lstnew (f (lst->content));
		if (!nelement)
		{
			ft_lstclear (&nelement, del);
			return (NULL);
		}
		ft_lstadd_back (&nlist, nelement);
		lst = lst->next;
	}
	return (nlist);
}
