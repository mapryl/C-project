/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:30:40 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/03 20:30:49 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrstr(const char *s, int c)
{
    char *last_pos;
    while (*s)
    {
        if (*s == c)
            last_pos = (char*)s;
        ++s;
    }
    if (last_pos)
        return(last_pos);
    if (c == '\0')
        return ((char*)s);
}

