/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:12:14 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/13 12:38:48 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_find_min(t_stack **lst)
{
	t_stack	*min;
	t_stack	*tmp;
	int		start;

	start = 0;
	min = NULL;
	tmp = *lst;
	while (tmp)
	{
		if (tmp->index == -1 && ((start == 0) || (tmp->value < min->value)))
		{
			min = tmp;
			start = 1;
		}
		tmp = tmp->next;
	}
	return (min);
}

void	ft_simplify(t_stack **lst)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = ft_find_min(lst);
	while (tmp)
	{
		tmp->index = i;
		tmp = ft_find_min(lst);
		i++;
	}
}
