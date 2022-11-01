/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:33 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/01 13:47:07 by mbazirea         ###   ########.fr       */
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
