/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <carlos.felipe@hotmail.com.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:48:24 by csiqueir          #+#    #+#             */
/*   Updated: 2022/06/21 19:07:02 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_fail(int i, char **words)
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

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	word_n;
	int	count;

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

static int	w_len(char const *str, int i, char c)
{
	int	len;

	len = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**pointer_pointers(char const *s, char c, char **words)
{
	int	str_i;
	int	word_c;
	int	word_i;

	str_i = 0;
	word_c = 0;
	while (s[str_i] != '\0' && word_c < ft_count_words(s, c))
	{
		word_i = 0;
		while (s[str_i] == c)
			str_i++;
		words[word_c] = (char *)malloc(sizeof(char) * w_len(s, str_i, c) + 1);
		if (!(words[word_c]))
			return (free_fail(word_c, words));
		while (s[str_i] != c && s[str_i] != '\0')
		{
			words[word_c][word_i] = s[str_i];
			word_i++;
			str_i++;
		}
		words[word_c][word_i] = '\0';
		word_c++;
	}
	words[word_c] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!(s))
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(words))
		return (NULL);
	pointer_pointers(s, c, words);
	return (words);
}
