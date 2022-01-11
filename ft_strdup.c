/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:46:20 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/11 09:46:22 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*copy;
	int		i;

	len = ft_strlen((char *)s1);
	copy = (char *)malloc(len);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	return (copy);
}
