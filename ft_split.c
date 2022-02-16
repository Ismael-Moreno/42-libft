/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:55:03 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/16 15:02:00 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"

static int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	ft_nextlen(char const *s, char c)
{
	int	l;

	l = 0;
	while (s[l] != c && s[l] != '\0')
	{
		l++;
	}
	return (l);
}

static char	**ft_free(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	int		k;
	int		len;
	int		next;

	k = 0;
	len = ft_count(s, c);
	arr_str = malloc(sizeof(char *) * (len + 1));
	if (!arr_str)
		return (NULL);
	while (k < len)
	{
		while (*s == c)
			s++;
		next = ft_nextlen(s, c);
		arr_str[k] = malloc(sizeof(char) * (next + 1));
		if (!arr_str[k])
			return (ft_free(arr_str, k));
		ft_strlcpy(arr_str[k], s, next + 1);
		s = ft_strchr(s, (int)c);
		k++;
	}
	arr_str[k] = NULL;
	return (arr_str);
}
