/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeon <sooylee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:56:33 by sooyeon           #+#    #+#             */
/*   Updated: 2021/12/07 15:56:35 by sooyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*new_list;

	new_list = *lst;
	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		*lst = new_list->next;
		del(new_list->content);
		free(new_list);
		new_list = *lst;
	}
}
