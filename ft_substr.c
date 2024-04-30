/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:39:26 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/30 12:23:02 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	substring[i] = '\0';
	return (substring);
}
