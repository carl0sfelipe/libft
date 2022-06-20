/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:48:24 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/20 19:48:38 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

static void *free_fail(int i, char **words)
{
	while (i != 0)
	{
		i--;
		if (words[i])
			free(words[i]);
	}
	free(words);
	return (NULL);
}

static int ft_count_words(char const *str, char c)
{
	int i;
	int word_n;
	int count;

	i = 0;
	word_n = 0;
	count = 0;
	if (!(str))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			word_n = 0;
		else if (word_n == 0)
		{
			word_n = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static int ft_wordlen(char const *str, int i, char c)
{
	int len;

	len = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char **pointer_pointers(char const *s, char c, char **words)
{
	int str_i;
	int word_count;
	int word_i;

	str_i = 0;
	word_count = 0;
	while (s[str_i] != '\0' && word_count < ft_count_words(s, c))
	{
		word_i = 0;
		while (s[str_i] == c)
			str_i++;
		words[word_count] = (char *)malloc(sizeof(char) * ft_wordlen(s, str_i, c) + 1);
		if (!(words[word_count]))
			return (free_fail(word_count, words));
		while (s[str_i] != c && s[str_i] != '\0')
		{
			words[word_count][word_i] = s[str_i];
			word_i++;
			str_i++;
		}
		words[word_count][word_i] = '\0';
		word_count++;
	}
	words[word_count] = NULL;
	return (words);
}

char **ft_split(char const *s, char c)
{
	char **words;

	if (!(s))
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(words))
		return (NULL);
	pointer_pointers(s, c, words);
	return (words);
}
