/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaakson <alaakson@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:01:58 by alaakson          #+#    #+#             */
/*   Updated: 2024/05/03 14:53:04 by alaakson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

size_t	ft_strlen(const char *s);

/*********************** lst_new *********************************/

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
/************************* lst_add_front **********************************/

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
    t_list *list = NULL;

	int	i;
	i = 0;
	while (i < 10)
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
        ft_lstadd_front(&list, new_elem);
		i++;
    }
    printf("List contents: ");
    t_list *current = list;
    while (current)
    {
        printf("%d ", *((int *)current->content));
        current = current->next;
    }
    printf("\n");
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }
    return 0;
}
/*****************************  lst_add_back  **********************************/

t_list	*ft_lstlast(t_list *lst)

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	if (last)
	{
		last->next = new;
	}
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

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
} 
#include <stdio.h>

int main()
{
    t_list *list = NULL;

	int	i;
	i = 0;
	while (i < 10)
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
        ft_lstadd_back(&list, new_elem);
		i++;
    }
    printf("List contents: ");
    t_list *current = list;
    while (current)
    {
        printf("%d ", *((int *)current->content));
        current = current->next;
    }
    printf("\n");
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }
    return 0;
}
/**************** lstdelone ************************/

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
/****************** to_upper  *********************/

int	main()
{
	char	lower = 'l';
	char	upper = ft_toupper(lower);

	printf("Lower letter %c\n", lower);
	printf("Uppercase letter %c\n", upper);

	return (0);
}

/***************** to_lower **********/

int	main()
{
	char	upper = 'l';
	char	lower = ft_tolower(upper);

	
	printf("Uppercase letter %c\n", upper);
	printf("Lower letter %c\n", lower);

	return (0);
}

/****** is_alnum/is_alpha/is_digit/is_ascii/is_print ************/
/* ft_isalnum, ft_isalpha, ft_isdigit, ft_isascii, ft_isprint  */

int	main(void)
{
	char	chars[] = {'a', 'Z', '5', '@'};
	int	i;

	i = 0;
	while (i < sizeof(chars))
	{
		if (ft_isalnum(chars[i]))
			printf("%c is right.\n" , chars[i]);
		else
			printf("%c is wrong.\n" ,chars[i]);
		i++;
	}
	return (0);
}

/**************** atoi  ****************/

int	main()
{
	printf("%d\n", ft_atoi("21415"));
	printf("%d\n", ft_atoi("-2147483648"));
}
/************** strlen **************/
/*
int	main()
{
	char src[] = "A lot of words here";
	
 	printf("%s\n", src);
	printf("%zu\n", ft_strlen("A lot of words here"));
	return (0);
}

/************ strlcpy ***************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char src[] = "Mega kakka bajs";
	char dst[50];
	size_t	len;

	len = ft_strlcpy(dst, src, sizeof(dst));
	
	printf("Copied string successfully: %s\n", dst);
	printf("Length of copied string: %zu\n", len);
	printf("Length of soruce string: %zu\n", ft_strlen(src));
	
	return (0);
}
/************* strchr ***************/

int	main()
{
	char str[] = "Roses are red, violets are blue, you are a stinkypoo!";
	char *pch;
	printf ("Searching for '!' in string: \"%s\n", str);
	pch = ft_strchr (str, '!');
	while (pch != NULL)
	{
		printf ("found at %ld\n", pch-str + 1);
		pch = ft_strchr(pch + 1, '!');
		return (0);
	}
}

/************ strrchr ************/

int	main()
{
	char str[] = "Poopoo peepee balls";
	char *pch;
	printf ("Searching for 'l' in string: \"%s\n", str);
	pch = ft_strrchr(str, 'l');
	printf ("Last occurence of 'l found at %ld\n", pch-str + 1);
	return (0);
}
/*********** strdup ************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	const char	s1[]= "The name is Mungus, Hugh Mungus";
	const char	*target = ft_strdup(s1);

	printf ("%s", ft_strdup(target));
	return (0);
}

/************* strncmp *************/

int	main()
{
	char src[] = "What is fanum tax?";
	char dest[] = "What is fanum tax?";
	int comp;
	
	comp = ft_strncmp(src, dest, 60);

	if (comp < 0)
	{
		printf("src is less than dest");
	}
		else if (comp > 0)
		{
			printf("dest is less than src");
		}
		else
		{
			printf("src is the same as dest brouski");
		}
	return (0);	
}

/************** strlcat ************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char srsc[] = "anita max wynn";
	char dest[70] = "Ladies and gentle hands :3 ";
	
	size_t len;
	len = ft_strlcat(dest, srsc, sizeof(dest));

	printf("Concatenated string: %s\n", dest);
	return (0);	
}
/************** memchr  **************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	const char	str[] = "'Murica yeaaaah";
	const char ch = 'e';
	char *comp;

	comp = ft_memchr(str, ch, ft_strlen(str));

	printf("String after %c is - %s\n", ch , comp);
	return (0);
}

/************ memcmp *****************/

int	main()
{
	const char	dst[] = "Commit tax fraud";
	const char	src[] = "Commit tax fraud";
	int len;

	len = ft_memcmp (src, dst, 15);

	if (len < 0)
	{
		printf("src is less than dest");
	}
		else if (len > 0)
		{
			printf("dest is less than src");
		}
		else
		{
			printf("Both are the same\n");
		}
	
	return (0);
}

/*************** memcpy *************/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char src[] = "Mega kakka bajs";
	char dst[50];
	size_t	len;

	len = ft_memcpy(dst, src, sizeof(dst));
	
	printf("Copied string successfully: %s\n", dst);
	printf("Length of copied string: %zu\n", len);
	
	return (0);
}
/************** memmove **************/

int	main()
{
	char	dest[] = "Sometimes my genius generates gravity";
	const char	src[] = "Sometimes you can hear my genious";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 40);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
}
/*************** memset ***************/

int main(void)
{
    char str[] = "ooop!";
    printf("Before memset: %s\n", str);
    ft_memset(str, 'p', 1);
    printf("After memset: %s\n", str);
    return (0);
}

/*********** bzero ************/
int	main(void)
{
	char buffer[80];
	int i;
	i = 0;
	
	printf("Before ft_bzero: \n");
	while (i < sizeof(buffer))
	{
		printf("%d", buffer[i]);
		i++;
	}
	printf("\n");
	ft_bzero(buffer, sizeof(buffer));
	printf("After ft_bzero:\n");
	i = 0;
	while (i < sizeof(buffer))
	{
		printf("%d", buffer[i]);
		i++;
	}
	printf ("\n");
	return (EXIT_SUCCESS);
}

/************* calloc **************/

int	main()
{
	int *p1;
	int *p2;
	int *p3;
	int	n;

	p1 = ft_calloc(4, sizeof(int));
	p2 = ft_calloc(1, sizeof(int[4]));
	p3 = ft_calloc(4, sizeof *p3);
	
	if (p2)
	{
		while (n < 4)
		{
			printf("p2[%d] == %d\n", n ,p2[n]);
			++n;
		}
	}
	free(p1);
    free(p2);
    free(p3);		
}

/************** strjoin *****************/

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
/************ putchar_fd***************/

#include <fcntl.h>

int	main(void)
{
	int custom_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 
	char c = 'C'; 
	char b = 'B'; 
	ft_putchar_fd(c, custom_fd); 
	ft_putchar_fd(b, custom_fd); 
	close(custom_fd); 
	return (0);
}

/*********** putendl_fd **************/

#include <fcntl.h>
int	main(void)
{
	int custom_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char *message = "Hello world";

	ft_putendl_fd (message, custom_fd);
	close(custom_fd);
	return (0);
}

/*********** putnbr_fd **************/

int	main(void)
{
	int	custom_fd = open("output.txxt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	int nbr = 32;

	ft_putnbr_fd (nbr, custom_fd);
	close(custom_fd);
	return (0);
}

/*************** putstr_fd *********************/

int	main(void)
{
	int	custom_fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char *c = "ungabunga";

	ft_putstr_fd (c, custom_fd);
	close(custom_fd);
	return (0);
}

/**********************/