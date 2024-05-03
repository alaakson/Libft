/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:01:32 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/03 13:39:26 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		d;
	int		s;

	s = 0;
	d = 0;
	dest = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (s1[s])
	{
		dest[d] = s1[s];
		d++;
		s++;
	}
	s = 0;
	while (s2[s])
	{
		dest[d] = s2[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}

int	main()
{
	const char	txt[] = "bingo bango bongo ";
	const char txt2[] = "bish bash bosh";
	char *res;
	
	res = ft_strjoin(txt, txt2);
	if (res)
	{
		printf("Concatenated strings: %s\n", res);
		free (res);
	}
	else 
	{
		printf("Memory allocation failed: \n");
	}
	return (0);
}
