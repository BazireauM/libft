/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:02:59 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/02 18:17:51 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	int	i;

	i = 0;
	while (i < (int) size - 1 && s1[i] == s2[i])
		i++;
	if (i != (int) size)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
