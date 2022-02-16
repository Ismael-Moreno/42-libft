/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:45:32 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/15 12:14:52 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) <= start)
		len = 0;
	if (start > ft_strlen((char *)s))
	{
		start = 0;
	}
	if (start + len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_memmove(new_str, s + start, len);
	new_str[len] = '\0';
	return (new_str);
}
