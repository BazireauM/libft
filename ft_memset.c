/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:20:30 by mbazirea          #+#    #+#             */
/*   Updated: 2022/10/31 15:36:47 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *pointer, int value, int count)
{
	int		i;
	char	*test;

	test = (char *) pointer;
	i = 0;
	while (i < count)
	{
		test[i] = (char) value;
		i++;
	}
	return (pointer);
}
