/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:45:56 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/16 12:39:10 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int	ft_digits(int nbr)
{
	int	digits;

	if (nbr <= 0)
		digits = 1;
	else
		digits = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_digits(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
