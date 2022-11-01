/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:38:29 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/01 13:16:28 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, int size)
{
	char *src2;
	char *dst2;
	int i;

	src2 = (char *) src;
	dst2 = (char *) dst;

	if (src > dst)
	{
		i = 0;
		while (i < size)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	else
	{
		i = size - 1;
		while(i > 0)
		{
			dst2[i] = src2[i];
			i--;
		}
	}
	return (dst);
}
