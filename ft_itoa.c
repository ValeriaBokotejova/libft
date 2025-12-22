/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 10:40:18 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/22 22:31:42 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		count++;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

static char	*alloc_str(int len)
{
	char	*tmp;

	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nb;

	nb = n;
	len = count_digit(nb);
	result = alloc_str(len);
	if (!result)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	i = len - 1;
	if (nb == 0)
		result[0] = '0';
	while (nb != 0)
	{
		result[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
Converts an integer n into a string.  
Returns the string or NULL if memory allocation fails.
*/