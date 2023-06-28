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
}

void ft_ss(t_stack **stack_a, t_stack **stack_b)
{
    ft__sa(stack_a);
    ft__sb(stack_b);
}
