/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:01:32 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/24 16:58:21 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		d;
	int		s;

	d = 0;
	s = 0;
	dest = ((char *) malloc(ft_strlen(s1) + ft_strlen(s2 + 1) * sizeof(char)));
	if (!dest)
		return (NULL);
	while (s1[s])
		dest[d++] = s1[s++];
	s = 0;
	while (s2[s])
		dest[d++] = s2[s++];
	dest[d] = 0;
	return (dest);
}
