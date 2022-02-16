/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 20:02:40 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/16 15:14:11 by imoreno          ###   ########.fr       */
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
	i = 0;
	if (!dst && !src && n > 0)
		return (NULL);
	if (new_dst < new_src)
	{
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
