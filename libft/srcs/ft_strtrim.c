/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:48:52 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/29 10:48:52 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	s = s;
	return (NULL);
	/*char *result;
	size_t i;
	size_t start;
	size_t end;

	result = 0;
	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s);
	while (s[start] && (s[start] == ' ' || s[start] == '\t' || s[start] == '\n'))
		start++;
	while (end && (s[end - 1] == ' ' || s[end - 1] == '\t' || s[end - 1] == '\n'))
		end--;
	if (end > start)
		result = ft_strnew(end - start);
	if (end <= start || !result)
		return(NULL);
	while (start < end)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result); */
}

