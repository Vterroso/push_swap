/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:09 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/20 13:53:02 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error(void)
{
    ft_putstr_fd("Error\n", 1););
    exit (0);
}

void ft_free(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    while (*stack_a)
    {
        tmp = *stack_a;
        *stack_a = (*stack_a)->next;
        free(tmp);
    }
    while (*stack_b)
    {
        tmp = *stack_b;
        *stack_b = (*stack_b)->next;
        free(tmp);
    }
}