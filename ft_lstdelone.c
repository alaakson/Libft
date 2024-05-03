/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:39:53 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/02 13:44:34 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void delete_int(void *n)
{
    free(n);
}

t_list *ft_lstnew(void *content)
{
    t_list *elem = (t_list *)malloc(sizeof(t_list));
    if (!elem)
        return NULL;
    elem->content = content;
    elem->next = NULL;
    return elem;
}
#include <stdio.h>
int main()
{
    int *num = (int *)malloc(sizeof(int));
    if (!num)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    *num = 42;
    t_list *new_elem = ft_lstnew(num);
    if (!new_elem)
    {
        printf("ft_lstnew failed!\n");
        free(num);
        return 1;
    }
    ft_lstdelone(new_elem, &delete_int);
	printf("Element successfully deleted!\n");
    return (0);
}
