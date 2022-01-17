/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:55:03 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/16 22:10:41 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**new_str;
	int		i;

	i = 0;
	len = ft_strlen((char *)s);
	new_str = malloc(len -1);
	if (!new_str)
		return NULL;
	while (s[i])
	{
		if (ft_strchr(s[i], c))
	}
}