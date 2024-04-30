/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:13:09 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/30 11:04:42 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			a;

	a = (char) c;
	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *) &s[i];
	return (res);
}
