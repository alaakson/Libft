/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:40:15 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/02 13:17:30 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
#include <stdio.h>
int	main()
{
    t_list *list = NULL;

    int i;
	i = 0;
	while (i < 5)
    {
        t_list *new_elem = ft_lstnew((void *)&i);
        if (!new_elem)
        {
            printf("Memory allocation failed!\n");
            while (list)
            {
                t_list *temp = list;
                list = list->next;
                free(temp);
            }
            return 1;
        }
        new_elem->next = list;
        list = new_elem;
		i++;
    }
    int size = ft_lstsize(list);

    printf("Size of the list: %d\n", size);
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }
    return 0;
}