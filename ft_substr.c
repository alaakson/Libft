/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:39:26 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/06 15:11:35 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	actual_len;

	if (!s)
		return (NULL);
	actual_len = ft_strlen(s);
	if ((size_t)start >= actual_len)
		return (ft_strdup(""));
	if (len > actual_len - start)
		len = actual_len - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	substring[len] = '\0';
	return (substring);
}
