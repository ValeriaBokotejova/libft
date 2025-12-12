/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 20:31:00 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/12 06:26:49 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	total_len;
	char	*sub;
	size_t	sub_len;

	if (!s)
		return (NULL);
	total_len = ft_strlen(s);
	if (start >= total_len)
		return (ft_strdup(""));
	if (total_len - start < len)
		sub_len = total_len - start;
	else
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
