/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:10:26 by mbazirea          #+#    #+#             */
/*   Updated: 2022/10/31 15:36:40 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int size)
{
	char	*src2;
	char	*dst2;
	int		i;

	src2 = (char *) src;
	dst2 = (char *) dst;
	i = 0;
	while (i < size)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
