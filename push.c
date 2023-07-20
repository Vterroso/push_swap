/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:56 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/19 17:58:58 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    if (!*stack_b)
        return ;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
    ft_putstr_fd("pa\n", 1);
}

void ft_pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    if (!*stack_a)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = *stack_b;
    *stack_b = tmp;
    ft_putstr_fd("pb\n", 1);
}