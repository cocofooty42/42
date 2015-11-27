/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgirard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 11:22:38 by cgirard           #+#    #+#             */
/*   Updated: 2015/11/26 16:51:24 by cgirard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char n);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

void	ft_swap(int *a, int *b);

void	ft_bzero(void *s, size_t n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memset(void *s, int c, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strlen(const char *str);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_islower(int c);

int		ft_isupper(int c);

int		ft_isprint(int c);

int		ft_isalnum(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strcat(char *dest, const char *src);

char	*ft_strncat(char *s1, const char *s2, size_t n);

char	*ft_strlcat(char *s1, const char *s2, size_t n);

char	*ft_strrchr(const char *s, int c);

char	*ft_strchr(const char *s, int c);

char	*ft_capitalize(char *str);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(const char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strstr(char *str, char *to_find);

char	*ft_strupcase(char *str);

#endif
