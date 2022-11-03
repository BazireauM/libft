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

int		ft_word_count(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

char	*ft_word_make(char *word, char const *s, int k, int word_len)
{
	int		i;

	i = 0;
	while (word_len > 0)
		word[i++] = s[k - word_len--];
	word[i] = '\0';
	return (word);
}

char	**ft_split2(char **result, char const *s, char c, int word_num)
{
	int		i;
	int		k;
	int		word_len;

	i = 0;
	k = 0;
	word_len = 0;
	while (s[k] && i < word_num)
	{
		while (s[k] && s[k] == c)
			k++;
		while (s[k] && s[k] != c)
		{
			k++;
			word_len++;
		}
		if (!(result[i] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		ft_word_make(result[i], s, k, word_len);
		word_len = 0;
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		word_num;
	char	**result;

	if (s == 0)
		return (NULL);
	word_num = ft_word_count(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (word_num + 1))))
		return (NULL);
	ft_split2(result, s, c, word_num);
	return (result);
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
