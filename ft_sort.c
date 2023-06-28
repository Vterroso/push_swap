#include "push_swap.h"

void ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    int len;
    int i;
    int j;
    int min;
    int max;
    int mid;
    int *arr;

    len = ft_stacklen(*stack_a);
    arr = malloc(sizeof(int) * len);
    if (!arr)
        ft_error();
    i = 0;
    while (i < len)
    {
        arr[i] = (*stack_a)->value;
        *stack_a = (*stack_a)->next;
        i++;
    }
    min = ft_min(arr, len);
    max = ft_max(arr, len);
    mid = (min + max) / 2;
    i = 0;
    while (i < len)
    {
        if (arr[i] <= mid)
        {
            ft_pb(stack_a, stack_b);
            i++;
        }
        else
        {
            ft_ra(stack_a);
            i++;
        }
    }
    j = 0;
    while (j < len)
    {
        if ((*stack_b)->value < mid)
        {
            ft_pa(stack_a, stack_b);
            j++;
        }
        else
        {
            ft_rb(stack_b);
            j++;
        }
    }
    free(arr);
}