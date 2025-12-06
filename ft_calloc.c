/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:00:42 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/06 20:01:27 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb > (~(size_t)0) / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		arr = malloc(1);
	else
		arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	return (ft_memset(arr, 0, nmemb * size));
}
/*
Allocates memory for an array and sets all bytes to zero.
Returns a pointer to the zeroed memory (or NULL if allocation fails)
*/
