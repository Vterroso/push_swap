/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:57:46 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/13 16:18:36 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone_stack(t_stack *lst)
{
	if (!lst)
		return ;
	if (lst)
		free(lst);
}

void	ft_lstclear_stack(t_stack **lst)
{
	t_stack	*current;
	t_stack	*next;

	if (!lst)
		return ;
	current = *lst;
	if (!current)
		return ;
	while (current)
	{
		next = current->next;
		ft_lstdelone_stack(current);
		current = next;
	}
	*lst = NULL;
}

t_stack	*ft_lstlast_stack(t_stack *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
