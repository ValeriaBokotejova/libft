/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 21:22:51 by vbokotej          #+#    #+#             */
/*   Updated: 2025/11/20 22:26:47 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = NULL;
	while (*s)
	{
		if (*s == c)
		{
			find = ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (find);
}
