/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vterroso <vterroso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:10:08 by vterroso          #+#    #+#             */
/*   Updated: 2023/03/27 12:35:37 by vterroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb > 0 && size > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	dest = malloc(nmemb * size);
	if (dest != NULL)
		ft_bzero(dest, nmemb * size);
	return (dest);
}
