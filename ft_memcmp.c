/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 08:22:35 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/24 16:08:33 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2. size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (n == 0)
		return (NULL);
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) ptr1[i] != (unsigned char) ptr2[i])
			return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
	}
	return (0);
}
