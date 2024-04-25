/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:40:11 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/25 08:29:46 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in(const char *str, char c)
{
	while (*str && c != *str)
		str++;
	return (c == *str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	first;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	end = ft_strlen(s1);
	while (in(set, s1[first]))
		first++;
	if (first == end)
		return (ft_strdup(""));
	while (in(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, first, end - first));
}
/*
int	main()
{
	char *test = "abababTestbbbaaa";
	printf("%s\n", ft_strtrim(test, "ab"));
	return (0);
}*/
