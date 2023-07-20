/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:57:42 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/19 17:57:48 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_add_stack(t_stack **stack, int ac, char **av)
{
    int i;
    t_stack *tmp;
    t_stack *new;

    i = 1;
    while (i < ac)
    {
        new = malloc(sizeof(t_stack));
        if (!new)
            ft_error();
        new->value = ft_atoi(av[i]);
        new->index = i;
        new->next = NULL;
        if (!*stack)
            *stack = new;
        else
        {
            tmp = *stack;
            while (tmp->next)
                tmp = tmp->next;
            tmp->next = new;
        }
        i++;
    }
}