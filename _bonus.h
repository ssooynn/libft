/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeon <sooylee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:45:56 by sooyeon           #+#    #+#             */
/*   Updated: 2021/12/14 16:45:57 by sooyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BONUS_H
# define _BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
        void                    *content;
        struct s_list   *next;
}

t_list          *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list          *ft_lstnew(void *content);
t_list          *ft_lstlast(t_list *lst);
void            ft_lstadd_front(t_list **lst, t_list *new);
void            ft_lstadd_back(t_list **lst, t_list *new);
void            ft_lstiter(t_list *lst, void (*f)(void *));
void            ft_lstdelone(t_list *lst, void (*del)(void *));
void            ft_lstclear(t_list **lst, void (*del)(void*));
int                     ft_lstsize(t_list *lst);

#endif
