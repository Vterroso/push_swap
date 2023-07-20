/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:59:03 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/19 17:59:05 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *last;

    if (!*stack_a || !(*stack_a)->next)
        return ;
    tmp = *stack_a;
    while (tmp->next->next)
        tmp = tmp->next;
    last = tmp->next;
    tmp->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    ft_putstr_fd("rra\n", 1);
}

void ft_rrb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *last;

    if (!*stack_b || !(*stack_b)->next)
        return ;
    tmp = *stack_b;
    while (tmp->next->next)
        tmp = tmp->next;
    last = tmp->next;
    tmp->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
    ft_putstr_fd("rrb\n", 1);
}

void ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_rra(stack_a);
    ft_rrb(stack_b);
    ft_putstr_fd("rrr\n", 1);
}