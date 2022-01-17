/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:40:30 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/12 19:49:37 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;
	if (ft_strlen((char *)&s1[i]) != 0)
	{
		while (j > i && ft_strchr((char *)set, s1[j]))
			j--;
	}
	new_str = malloc(j - i + 2);
	if (!new_str)
		return (NULL);
	new_str = ft_substr(s1, i, j - i + 1);
	return (new_str);
}
