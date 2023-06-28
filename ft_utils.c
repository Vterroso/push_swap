#include "push_swap.h"

void ft_print_stack(t_stack *stack)
{
    while (stack)
    {
        ft_printf("%d\n", stack->value);
        stack = stack->next;
    }
}

int ft__stacklen(t_stack *stack)
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

int ft__min(int *arr, int len)
{
    int min;
    int i;

    min = arr[0];
    i = 1;
    while (i < len)
    {
        if (arr[i] < min)
            min = arr[i];
        i++;
    }
    return (min);
}

int ft__max(int *arr, int len)
{
    int max;
    int i;

    max = arr[0];
    i = 1;
    while (i < len)
    {
        if (arr[i] > max)
            max = arr[i];
        i++;
    }
    return (max);
}
