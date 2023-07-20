/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:59:17 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/19 19:26:28 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack **stack_a)
{
    t_stack *tmp;

    if (!*stack_a || !(*stack_a)->next)
        return ;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = (*stack_a)->next;
    (*stack_a)->next = tmp;
    ft_putstr_fd("sa\n", 1);
}

void ft_sb(t_stack **stack_b)
{
    t_stack *tmp;

    if (!*stack_b || !(*stack_b)->next)
        return ;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = (*stack_b)->next;
    (*stack_b)->next = tmp;
    ft_putstr_fd("sb\n", 1);
}

void ft_ss(t_stack **stack_a, t_stack **stack_b)
{
    ft_sa(stack_a);
    ft_sb(stack_b);
    ft_putstr_fd("ss\n", 1);
}
