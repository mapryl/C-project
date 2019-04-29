/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:45:58 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/02 19:46:27 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    unsigned long   result;
    int             i;
    int             sign;

    result = 0;
    i = 0;
    sign = 1;
    while (str[i] != '\0' && ft_isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] != '\0' && ft_isdigit(str[i]))
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}