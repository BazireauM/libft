/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:48:18 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/02 19:18:13 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	b;
	size_t	a;
	char	*final;

	final = malloc(sizeof(char) * (int) len + 1);
	if (!final)
		return (NULL);
	b = 0;
	a = 0;
	while (s[b + start])
	{
		if (b >= start && a < len)
		{
			final[a] = s[b];
			a++;
		}
		b++;
	}
	final[a] = '\0';
	return (final);
}
