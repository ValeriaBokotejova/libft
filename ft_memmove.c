/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 00:29:47 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/06 01:05:09 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;
	char	*dst;

	tmp = (char *)src;
	dst = (char *)dest;
	if (tmp < dst && dst < tmp + n)
		while (n-- > 0)
			dst[n] = tmp [n];
	else
		while (n-- > 0)
			*dst++ = *tmp++;
	return (dest);
}
/*
Copies n bytes from src to dest safely, even if memory overlaps.
Returns the original pointer to dest
*/
