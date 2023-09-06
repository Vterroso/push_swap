/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:36 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/06 18:20:17 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("index:%d value:%d\n", stack->index, stack->value);
        
        stack = stack->next;
    }
}

int ft_stacklen(t_stack *stack)
{
    int len;

    len = 0;
    while (stack)
    {
        len++;
        stack = stack->next;
    }
    return (len);
}

int ft_min(t_stack *stack, int len)
{
    int min;
    int i;

    min = stack->value;
    i = 1;
    while (i < len)
    {
        if (stack->next->value < min)
            min = stack->next->value;
        stack = stack->next;
        i++;
    }
    return (min);
}

int ft_max(t_stack *stack, int len)
{
    int max;
    int i;

    max = stack->value;
    i = 1;
    while (i < len)
    {
        if (stack->next->value > max)
            max = stack->next->value;
        stack = stack->next;
        i++;
    }
    return (max);
}



