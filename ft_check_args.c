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
        if (!ft_isdigit(str[i]) && str[i] != '-')
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
        {
            printf("Error isnum\n");
            ft_error();
        }
        else if (tmp < INT_MIN || tmp > INT_MAX){
            printf("Error minmax\n");
            ft_error();
        }
        else if (ft_isrepeat(i, tmp, args)){
            printf("Error isrepeat\n");
            ft_error();
        }
        i++;
    }
    if (ac == 2)
        free(args);
}
