/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:31:26 by vterroso          #+#    #+#             */
/*   Updated: 2023/07/17 18:47:44 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include<limits.h>
#include<stdio.h>

typedef struct s_stack
{
    int             index;
    int             value;
    struct s_stack  *next;
}                   t_stack;
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst);
void    ft_error(void);
void ft_check_args(int ac, char **av);
int is_sorted(t_stack *stack);
void ft_add_stack(t_stack **stack, int ac, char **av);
void ft_sort(t_stack **stack_a, t_stack **stack_b);
int ft_stacklen(t_stack *stack);
int ft_min(int *arr, int len);
int ft_max(int *arr, int len);
void ft_sa(t_stack **stack);
void ft_sb(t_stack **stack);
void ft_ss(t_stack **stack_a, t_stack **stack_b);
void ft_pa(t_stack **stack_a, t_stack **stack_b);
void ft_pb(t_stack **stack_a, t_stack **stack_b);
void ft_ra(t_stack **stack);
void ft_rb(t_stack **stack);
void ft_rr(t_stack **stack_a, t_stack **stack_b);
void ft_rra(t_stack **stack);
void ft_rrb(t_stack **stack);
void ft_rrr(t_stack **stack_a, t_stack **stack_b);
void ft_print_stack(t_stack *stack);


#endif