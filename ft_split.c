/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:44:47 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/02 21:05:24 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_split(char const *s, char c)
{
	int	a;
	int	b;

	a = 0;
	while (s[a])
	{
		while (s[a] != c)
			a++;
		while (s[a] == c)
			a++;
		b++;
	}
	return (b);
}

char **final_malloc(char *final,char *s2, char c)
{
	int a;
}

char	**ft_split(char const *s, char c)
{
	char	*s2;
	char	*final;
	int		n_split2;

	s2 = ft_strtrim(*s, c);
	n_split2 = n_split(s2, c);
	final = malloc(sizeof(char *) * n_split2);
}
