/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:07:15 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/17 11:40:33 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
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
		ft_lstdelone(current);
		current = next;
	}
	*lst = NULL;
}
