/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 19:43:45 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/09 19:43:47 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	if ((ft_strlen((char *)needle) == 0))
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			l = 1;
			while (needle[j] && i + j < len && j < len)
			{
				if (needle[j] != haystack[i + j])
					l = 0;
				j++;
			}
			if (l && !needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
