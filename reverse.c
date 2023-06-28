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
}

void ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
    ft_rra(stack_a);
    ft_rrb(stack_b);
}