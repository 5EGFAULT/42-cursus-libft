/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:35:09 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/06 20:35:11 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
		if (*((unsigned char *)(src + i)) == (unsigned char)c)
		{
			return ((unsigned char *)(dst + i + 1));
		}
		++i;
	}
	return (NULL);
}
