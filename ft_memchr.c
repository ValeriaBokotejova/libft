/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 01:07:19 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/06 01:36:28 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	byte;

	str = (unsigned char *)s;
	byte = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == byte)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
/*
Looks for the first byte equal to c in the first n bytes of s.
Returns a pointer to the byte if found, or NULL if not
*/
