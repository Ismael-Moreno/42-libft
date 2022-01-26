/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:55:03 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/19 21:02:07 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"
void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (ptr == NULL)
		return (malloc(size));
	if (!size)
		return (ptr);
	new_ptr = malloc(size);
	ft_memcpy(new_ptr, ptr, size);
	return (new_ptr);
}

static	int	ft_countSep(char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && s[i] != '\0')
		{
			k++;
		}
		i++;
	}
	return (k);
}
char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	new_str = malloc(ft_countSep((char *)s, c));
	if (!new_str)
		return NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while(s[j] != c)
				j++;
			new_str[k] = malloc(sizeof(char) * j);
			j = 0;
			while(s[i] != c)
			{
				new_str[k][j] = s[i];
				j++;
				i++;
			}
			k++;
		} else {
			i++;
		}
	}
	i = 0;
	while(new_str[i++])
		printf("%s11",(new_str[i]));
	return (new_str);
}