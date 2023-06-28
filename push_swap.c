#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    if (ac < 2)
        return (0);
    ft_checkargs(ac, av);
    stack_a = NULL;
    stack_b = NULL;
    ft_add_stack(&stack_a, ac, av);   
    if (is_sorted(stack_a))
        return (0);
    ft_sort(&stack_a, &stack_b);
    
    return (0);
}