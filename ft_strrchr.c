/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:13:09 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/24 17:27:30 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	str;
	char			*res;
	char			a;

	a = (char) c;
	res = NULL;
	str = 0;
	while (s[str])
	{
		if (s[str] == a)
			res = ((char *) &s[str]);
		str++;
	}
	if (s[str] == c)
		res = (char *) &s[str];
	return (res);
}
