/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbokotej <vbokotej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 00:07:20 by vbokotej          #+#    #+#             */
/*   Updated: 2025/12/23 16:15:30 by vbokotej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
Allocates and returns a new list node.
The node's content is set to the given parameter, next is set to NULL.
*/
/*
int main(void)
{
    t_list *node = ft_lstnew("Hello, World!");

    if (node)
    {
        printf("Node content: %s\n", (char *)node->content);
        printf("Next pointer: %p\n", (void *)node->next);
    }
    return (0);
}
*/