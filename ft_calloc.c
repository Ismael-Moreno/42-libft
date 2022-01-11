/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoreno <imoreno@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:30:24 by imoreno           #+#    #+#             */
/*   Updated: 2022/01/11 09:30:26 by imoreno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*memory;

	i = 0;
	while (i < count)
	{
		memory = malloc(count * size);
		i++;
	}
	ft_memset(memory, 0, count * size);
	return (memory);
}
