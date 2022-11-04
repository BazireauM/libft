/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:44:47 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/04 14:16:42 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_split(char *split, char const *s, int a, int len)
{
	int		i;

	i = 0;
	while (len > 0)
	{
		split[i] = s[a - len];
		i++;
		len--;
	}
	split[i] = '\0';
	return (split);
}

int	get_n_split(char const *s, char c)
{
	int	i;
	int	n_split;

	i = 0;
	n_split = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n_split++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n_split);
}

char	**ft_split2(char **final, char const *s, char c, int n_split)
{
	int		i;
	int		b;
	int		len;

	b = 0;
	i = 0;
	len = 0;
	while (s[i] && b < n_split)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		final[b] = malloc(sizeof(char) * (len + 1));
		if (!final[b])
			return (NULL);
		fill_split(final[b], s, i, len);
		len = 0;
		b++;
	}
	final[b] = 0;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	int		n_split;
	char	**final;

	if (s == 0)
		return (NULL);
	n_split = get_n_split(s, c);
	final = malloc(sizeof(char *) * (n_split + 1));
	if (!final)
		return (NULL);
	ft_split2(final, s, c, n_split);
	return (final);
}
