/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:58:47 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/06 17:05:00 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	leaks(void)
{
    system("leaks -q push_swap");
}*/


int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

    //atexit(leaks);
    if (ac < 2)
        return (0);
    ft_check_args(ac, av);
    stack_a = NULL;
    stack_b = NULL;
    ft_add_stack(&stack_a, ac, av);   
    if (is_sorted(stack_a))
        return (0);
    ft_sort(&stack_a, &stack_b);
    ft_print_stack(stack_a);
    ft_lstclear(&stack_a);
    ft_lstclear(&stack_b);
    ft_free(&stack_a , &stack_b);  
    return (0);
}