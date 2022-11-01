/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:33 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/01 15:51:16 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


int		isalnum(int character);
int		ft_isalpha(int character);
int		ft_isascii(int c);
int		isdigit(int character);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, int n);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void	*dst, const void *src, int size);
void	*ft_memmove(void *dst, const void *src, int size);
int		ft_strlcpy(char *dst, const char *src, int size);
int		ft_strlcat(char *dst, const char *src, int size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, int size);
void	*ft_memchr(const void *m, int c, int size);
int		ft_memcmp(void *p1, void *p2, int size);
