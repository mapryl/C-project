/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:39:36 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/29 10:39:36 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list * ft_lstnew(void *content, size_t content_size)
{
	t_list* new_node = (t_list*) malloc(sizeof(t_list));
	if (new_node == NULL)
		return NULL;

	new_node->next = NULL;
	new_node->content = content;
	new_node->content_size = (content == NULL) ? 0 : content_size;

	return new_node;
}

