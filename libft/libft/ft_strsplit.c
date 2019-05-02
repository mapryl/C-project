/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapryl <mapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 10:47:04 by mapryl            #+#    #+#             */
/*   Updated: 2019/04/29 10:47:04 by mapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_char(const char ch, char c)
{
	return (ch == c);
}

int		next_word(const char *str, int pos, char c)
{
	while (is_char(str[pos], c))
		pos++;
	if (str[pos] != '\0')
		return (pos);
	else
		return (-1);
}

int		read_word(const char *str, int pos, char c)
{
	while (str[pos] != '\0' && !is_char(str[pos], c))
		pos++;
	return (pos);
}

int		count_words(const char *str, char c)
{
	int pos;
	int words;

	pos = 0;
	words = 0;
	while ((pos = next_word(str, pos, c)) != -1)
	{
		words++;
		pos = read_word(str, pos, c);
	}
	return (words);
}

char	**ft_strsplit(char const *str, char c)
{
	int		cur_word;
	int		pos;
	int		word_end;
	int		j;
	char	**words;

	j = count_words(str, c);
	words = (char**)malloc(sizeof(char*) * (j + 1));
	cur_word = 0;
	pos = 0;
	while ((pos = next_word(str, pos, c)) != -1)
	{
		word_end = read_word(str, pos, c);
		words[cur_word] = (char*)malloc(sizeof(char) * (word_end - pos + 1));
		j = 0;
		while (pos != word_end)
			words[cur_word][j++] = str[pos++];
		words[cur_word++][j] = '\0';
	}
	return (words);
}
