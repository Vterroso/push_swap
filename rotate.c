/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:59:11 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/13 12:31:45 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*first;

	if (!*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*first;

	if (!*stack_b || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	first->next = NULL;
	ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra(stack_a);
	ft_rb(stack_b);
	ft_putstr_fd("rr\n", 1);
}
