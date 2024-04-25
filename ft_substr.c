/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:39:26 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/25 12:29:11 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	substring = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!substring)
		return (0);
	while (i < len)
	{
		substring[i] = *(s + start + i);
		i++;
	}
	subtring[i] = '\0';
	return (substring);
}
