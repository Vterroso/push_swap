#include "push_swap.h"

void ft_ra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *first;

    if (!*stack_a || !(*stack_a)->next)
        return ;
    tmp = *stack_a;
    first = *stack_a;
    *stack_a = (*stack_a)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = first;
    first->next = NULL;
}

void ft_rb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *first;

    if (!*stack_b || !(*stack_b)->next)
        return ;
    tmp = *stack_b;
    first = *stack_b;
    *stack_b = (*stack_b)->next;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = first;
    first->next = NULL;
}

void ft_rr(t_stack **stack_a, t_stack **stack_b)
{
    ft_ra(stack_a);
    ft_rb(stack_b);
}
