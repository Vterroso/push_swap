/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:57:59 by vterroso          #+#    #+#             */
/*   Updated: 2023/09/13 19:10:55 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isrepeat(int i, long tmp, char **args)
{
	i++;
	while (args[i])
	{
		if (tmp == ft_atol(args[i]))
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && i == 0)
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int ac, char **av)
{
	int		i;
	long	tmp;
	char	**args;

	i = 1;
	args = av;
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		if (ft_isnum(args[i]) == 0)
			ft_error();
		else if (tmp < INT_MIN || tmp > INT_MAX)
			ft_error();
		else if (ft_isrepeat(i, tmp, args))
			ft_error();
		i++;
	}
	if (ac == 2)
		exit(1);
}
