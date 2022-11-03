/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:44:47 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/03 12:30:31 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_split(char const *s, char c)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s[a])
	{
		while (s[a] != c && s[a])
			a++;
		while (s[a] == c)
			a++;
		b++;
	}
	return (b);
}

void	final_malloc(char **final, char *s2, char c)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	d = 0;
	while (s2[a])
	{
		b = 0;
		while (s2[a] != c && s2[a])
		{
			a++;
			b++;
		}
		while (s2[a] == c)
			a++;
		final[d] = malloc(sizeof(char) * b + 1);
		d++;
	}
}

void	final_final(char **final, char *s2, char c)
{	
	int	a;
	int	b;
	int	d;

	a = 0;
	d = 0;
	while (s2[a])
	{
		b = 0;
		while (s2[a] != c && s2[a])
		{
			final[d][b] = s2[a];
			a++;
			b++;
		}
		final[d][b] = '\0';
		while (s2[a] == c)
		{
			a++;
		}
		d++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	*s2;
	char	**final;
	int		n_split2;

	s2 = ft_strtrim((char *) s, &c);
	n_split2 = n_split(s2, c);
	final = malloc(sizeof(char *) * n_split2 + 1);
	if (!final)
		return (NULL);
	final_malloc(final, s2, c);
	final_final(final, s2, c);
	final[n_split2] = NULL;
	free(s2);
	return (final);
}
/*
int main(void)
{
	char **test;
	test = ft_split("---test-test----test-test----test---test-test-",'-');
	printf("0 : %s\n", test[0]);
	printf("1 : %s\n", test[1]);
	printf("2 : %s\n", test[2]);
	printf("3 : %s\n", test[3]);
	printf("4 : %s\n", test[4]);
	printf("5 : %s\n", test[5]);
	printf("6 : %s\n", test[6]);
	printf("7 : %s\n", test[7]);
}
*/
