/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:54:29 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/26 11:53:20 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = 0;
	if (dstsize != 0)
	{
		while (src[src_len] != '\0' && src_len < (dstsize -1))
		{
			dst[src_len] = src[src_len];
			src_len++;
		}
		dst[src_len] = '\0';
	}
	return (ft_strlen(src));
}
