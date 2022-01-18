/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spgibber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:16:30 by spgibber          #+#    #+#             */
/*   Updated: 2021/10/25 18:17:55 by spgibber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *buf, int c, size_t count);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num);

void	*ft_memmove(void *dest, const void *srcs, size_t number);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *str, int ch);

char	*ft_strrchr(const char *str, int ch);

int		ft_strncmp(const char *str1, const char	*str2, size_t n);

void	*ft_memchr(const void *arr, int c, size_t n);

int		ft_memcmp(const void *buf1, const void *buf2, size_t count);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t num, size_t size);

char	*ft_strdup(char *src);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif
