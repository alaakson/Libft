/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:16:05 by alaakson          #+#    #+#             */
/*   Updated: 2024/04/24 17:18:32 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
} */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	dest = malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	f(unsigned int i, char c)
{
	char	str;

	str = c + 1;
	return (str);
}
/*
int main()
{
	char str1[] = "@msnm";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
