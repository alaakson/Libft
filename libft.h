#ifndef LIBFT_H
# define LIBFT_H

#include <sys/types.h>
#include <unistd.h> //remove when done maybe 
#include <stdlib.h> // remove when done maybe 

typedef struct s_list
{
void	*content;
struct	s_list *next;
}			t_list;

char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    **ft_split(const char *s, char c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);

int	ft_isalnum(int i);
int	ft_isalpha(int i);
int	ft_isascii(int c);
int	ft_atoi(const char *str);
int	ft_isdigit(int i);
int	ft_isprint(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif