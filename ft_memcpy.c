/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:53:21 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/06 00:28:36 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;

	if (!dest && !src)
		return (NULL);
	source = (char *)src;
	dst = (char *)dest;
	while (n-- > 0)
		*dst++ = *source++;
	return (dest);
}
/*
Copies n bytes from the source memory to the destination memory, one by one.
Returns the original pointer to the destination
*/
