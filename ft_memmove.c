/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:02:40 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/12 12:06:49 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*new_dst;
	unsigned char	*new_src;

	new_dst = (unsigned char *)dst;
	new_src = (unsigned char *)src;
	if (!dst && !src && n > 0)
		return (0);
	if (new_dst < new_src)
	{
		i = 0;
		while (n--)
		{
			((char *)new_dst)[i] = ((char *)new_src)[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			((char *)new_dst)[n] = ((char *)new_src)[n];
		}
	}
	return (new_dst);
}
