/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:55:03 by imoreno           #+#    #+#             */
/*   Updated: 2022/02/01 20:29:46 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "string.h"

static int	ft_countchars(char *s, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j = i + 1;
			while (s[j] != c)
			{
				k++;
				j++;
			}
		}
		i++;
	}
	return (k);
}

static	int	ft_nextseplen(char const *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

static void	ft_loopover(char const *s, char **new_str, char c, int *i)
{
	int	j;

	j = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		(*new_str)[j] = s[*i];
		j++;
		(*i)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	new_str = malloc(ft_countchars((char *)s, c));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			new_str[k] = malloc(sizeof(char) * ft_nextseplen(s, c, i + 1));
			if (!new_str[k])
				return (NULL);
			ft_loopover(s, &new_str[k], c, &i);
			k++;
		}
		else
			i++;
	}
	return (new_str);
}
