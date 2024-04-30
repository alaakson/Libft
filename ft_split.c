/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:33:52 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/30 11:05:19 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c);
char			*fill_words(const char *str, int start, int end);
/*static void				ft_free(char **strs, int count);*/

char	**ft_split(const char *s, char c)
{
	char	**dest;
	size_t	len;
	int		i;
	int		sw;

	if (!s || !(dest = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	len = 0;
	sw = -1;
	while (s[len - 1] != '\0')
	{
		if (s[len] != c && sw < 0)
			sw = len;
		else if ((s[len] == c || s[len] == '\0') && sw >= 0)
		{
			if (!(dest[i++] = fill_words(s, sw, len)))
			{
				free(dest[i]);
				return (NULL);
			}
			sw = -1;
		}
		len++;
	}
	dest[i] = NULL;
	return (dest);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

char	*fill_words(const char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/*void	ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}*/
