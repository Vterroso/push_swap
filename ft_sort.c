/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:29 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/06 18:42:32 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_three(t_stack **stack_a)
{
    int a;
    int b;
    int c;

    a = (*stack_a)->value;
    b = (*stack_a)->next->value;
    c = (*stack_a)->next->next->value;
    if (a > b && b < c && a < c)
        ft_sa(stack_a);
    else if (a > b && b > c && a > c)
    {
        ft_sa(stack_a);
        ft_rra(stack_a);
    }
    else if (a > b && b < c && a > c)
        ft_ra(stack_a);
    else if (a < b && b > c && a < c)
    {
        ft_sa(stack_a);
        ft_ra(stack_a);
    }
    else if (a < b && b > c && a > c)
        ft_rra(stack_a);
}

void ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
    int min;
    int max;

while(ft_stacklen(*stack_a) > 3)
{
    min = ft_min(*stack_a, ft_stacklen(*stack_a));
    max = ft_max(*stack_a, ft_stacklen(*stack_a));
    if ((*stack_a)->value == max)
        ft_ra(stack_a);
    else if ((*stack_a)->value == min)
        ft_pb(stack_a, stack_b);
    else
        ft_ra(stack_a);
}
    ft_sort_three(stack_a);
    ft_pa(stack_a, stack_b);
}

void ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int min;

    while (ft_stacklen(*stack_a) > 4)
    {
        min = ft_min(*stack_a, ft_stacklen(*stack_a));
        if ((*stack_a)->value == min)
            ft_pb(stack_a, stack_b);
        else
            ft_ra(stack_a);
    }
    ft_sort_four(stack_a, stack_b);
    ft_pa(stack_a, stack_b);
}

void ft_radix_sort(t_stack **stack_a, t_stack **stack_b)
{
    int i;
    int j;
    int size;

    ft_simplify(stack_a);
    i = 0;
    size = ft_stacklen(*stack_a);
    while (!is_sorted(*stack_a))
    {
        j = 0;
        while (j++ < size)
        {
            if (((*stack_a)->index >> i & 1) == 1)
                ft_ra(stack_a);
            else
                ft_pb(stack_a, stack_b);
        }
        while (ft_stacklen(*stack_b) != 0)
            ft_pa(stack_a, stack_b);
        i++;
    }
}
void ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    int len;

    len = ft_stacklen(*stack_a);
    if (len == 2)
        ft_sa(stack_a);
    else if (len == 3)
        ft_sort_three(stack_a);
    else if (len == 4)
        ft_sort_four(stack_a, stack_b);
    else if (len == 5)
        ft_sort_five(stack_a, stack_b);
    else
    {
        ft_simplify(stack_a);
        ft_radix_sort(stack_a, stack_b);
    }
}