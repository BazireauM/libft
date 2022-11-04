/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:48:18 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/04 18:16:42 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	int		b;
	char	*final;

	if (start > ft_strlen(s))
	{
		final = malloc(sizeof(char));
		if (!final)
			return (NULL);
		final[0] = 0;
		return (final);
	}
	final = malloc(sizeof(char) * (int) len + 1);
	if (!final)
		return (NULL);
	a = 0;
	b = start;
	while (s[b] && a < len)
	{
		final[a] = s[b];
		a++;
		b++;
	}
	final[a] = '\0';
	return (final);
}
