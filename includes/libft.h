/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:32:31 by vjovanov          #+#    #+#             */
/*   Updated: 2018/12/07 13:17:03 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "ft_printf.h"
# include "../srcs/ft_dtoa/ft_dtoa.h"
# include "../srcs/ft_ldtoa/ft_ldtoa.h"
# include "float.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_swapi(int *a, int *b);
void				ft_swap(char *a, char *b);
void				ft_intset(int *tab, int n, int c);
void				ft_initarray(char **tab, int size);
int					ft_array_length(void **tab);
void				ft_bzero(void *s, size_t n);
void				ft_error(const char *msg);
void				ft_warning(const char *msg);
void				ft_info(const char *msg);
int					ft_sqrt(int nb);
int					ft_sqrtnext(int nb);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
size_t				ft_strlen(const char *str);
size_t				ft_nblen(long long nb);
size_t				ft_strclen(const char *str, int c);
char				*ft_strdup(const char *src);
char				*ft_strndup(const char *s, size_t n);
char				*ft_strdupwc(char *str, char ban);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
size_t len);
char				*ft_implode(char **tab, char *glue);
void				ft_strreplace(char *str, char needle, char replace);
char				*ft_streplace_first(char *str, char *to_replace,
char *replacement);
char				*ft_strremove(const char *str, int start, int len);
char				*ft_strtolower(char *s);
char				*ft_strtoupper(char *s);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_2dtabdel(void **tab, int size);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				**ft_strsplitfunc(char const *s, int f(int));
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_atoi(const char *nptr);
unsigned long long	ft_atoull(const char *nptr);
long long			ft_atoll(const char *str);
char				*ft_itoa(int n);
char				*ft_stoa(short n);
char				*ft_ctoa(char n);
char				*ft_ltoa(long n);
char				*ft_lltoa(long long n);
char				*ft_ustoa(unsigned short n);
char				*ft_uctoa(unsigned char n);
char				*ft_ultoa(unsigned long n);
char				*ft_ulltoa(unsigned long long n);
char				*ft_uitoa(unsigned int n);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list	**alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

char				*ft_itoa_base(int number, int base);
char				*ft_ltoa_base(long number, int base);
char				*ft_lltoa_base(long long number, int base);
char				*ft_uitoa_base(unsigned int number, int base);
char				*ft_ultoa_base(unsigned long number, int base);
char				*ft_ulltoa_base(unsigned long long number, int base);
#endif
