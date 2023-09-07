/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:36 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/07 15:45:04 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("index:%d value:%ld\n", stack->index, stack->value);
        
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

long ft_min(t_stack *stack, int len)
{
    long min;
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

long ft_max(t_stack *stack, int len)
{
    long max;
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

long	gitft_atol(const char *str)
{
	int	res;
	long		sign;
	long		i;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}




