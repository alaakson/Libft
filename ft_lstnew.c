/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:40:12 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/02 12:45:06 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
#include <stdio.h>
int	main()
{
	int *num;
	num = (int *)malloc(sizeof(int));
	if (!num)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	*num = 42;
	t_list *new_elem;
	new_elem = ft_lstnew(num);
	if (!new_elem)
	{
		printf("ft_lstnew failed\n");
		free(num);
		return (1);
	}
	printf("Content of the new element: %d\n", *((int *)new_elem->content));
	free(num);
	free(new_elem);
	return (0);
}
