/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:00:00 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/01 17:10:04 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	void	*test;
	char	*null;
	int		i;

	test = malloc (count * size);
	null = (char *) test;
	i = 0;
	while (i < count * size)
	{
		null[i] = '\0';
		i++;
	}
	return (test);
}
