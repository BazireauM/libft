/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:21:46 by mbazirea          #+#    #+#             */
/*   Updated: 2022/10/31 11:43:10 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalnum(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	else if (character >= '1' && character <= '9')
		return (1);
	else
		return (0);
}
