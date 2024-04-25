
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void(*del))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = 0;
	while (lst)
	{
		new_obj = 
	}
	new_el
	return (new_list);
}