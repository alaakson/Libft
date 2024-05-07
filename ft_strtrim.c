/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:40:11 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/07 12:24:25 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char c, char const *str)
{
	while (*str && c != *str)
		str++;
	return (c == *str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	first;
	size_t	end;

	first = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	while (in(s1[first], set))
		first++;
	while (in(s1[end], set))
		end--;
	return (ft_substr(s1, first, end - first + 1));
}
