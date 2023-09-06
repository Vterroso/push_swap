/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:57:59 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/05 18:14:19 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_isrepeat(int i, long tmp, char **args)
{
    i++;
    while(args[i])
    {
        if (tmp == ft_atoi(args[i]))
            return(1);
        i++;

    }
    return(0);    
}

static int ft_isnum(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] == '-' && i == 0)
            i++;
        if (!ft_isdigit(str[i]))
            return(0);
        i++;
    }
    return(1);
}

void ft_check_args(int ac, char **av)
{
    int i;
    long tmp;
    char **args;
    
    i = 0;
    if(ac == 2)
        args = ft_split(av[1], ' ');
    else
        {
            i = 1;
            args = av;
        }
    while(args[i])
    {
        tmp = ft_atoi(args[i]);
        if (ft_isnum(args[i]) == 0)
            ft_error();
        else if (tmp < INT_MIN || tmp > INT_MAX)
            ft_error();
        else if (ft_isrepeat(i, tmp, args))
            ft_error();
        i++;
    }
    if (ac == 2)
        free(args);
}
