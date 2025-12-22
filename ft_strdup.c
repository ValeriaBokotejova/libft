/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 16:05:10 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/06 16:59:03 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(s) + 1;
	dst = malloc(size);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s, size);
	return (dst);
}
/*
It duplicates string :-) 
Makes a new copy of a given string in freshly allocated memory
*/
