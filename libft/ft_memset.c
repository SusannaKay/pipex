/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skayed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:20:11 by skayed            #+#    #+#             */
/*   Updated: 2024/12/14 15:04:08 by skayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*g;
	size_t	i;

	i = 0;
	g = (char *)s;
	while (i < n)
	{
		g[i] = c;
		i++;
	}
	return (s);
}
