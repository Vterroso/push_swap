#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/libft.h"
#include<limits.h>

typedef struct s_stack
{
    int             index;
    int             value;
    struct s_stack  *next;
}                   t_stack;

void    ft_error(void);
void ft_check_args(int ac, char **av);
int is_sorted(t_stack *stack);

#endif