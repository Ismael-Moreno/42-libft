/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 00:40:30 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/16 09:04:52 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	int			k;
	char		*new_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr((char *)set, s1[i]))
		i++;
	while ((j > i) && ft_strchr((char *)set, s1[j]))
		j--;
	new_str = malloc(sizeof(char) * (j - i + 2));
	if (!new_str)
		return (NULL);
	k = 0;
	while (i <= j)
		new_str[k++] = s1[i++];
	new_str[k] = '\0';
	return (new_str);
}
