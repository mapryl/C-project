/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:49:59 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/03 18:50:31 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    size_t i;
    char *dst;

    dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s1) + 1));
    if (dst == NULL)
        return (NULL);
    i = 0;
    
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}