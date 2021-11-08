/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:18:58 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/08 18:19:00 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	s_src;

	j = -1;
	s_src = -1;
	while (dst[++j] != '\0')
		;
	while (src[++s_src] != '\0')
		;
	i = j;
	if (!dst && !src)
		return (s_src + j -1);
	while (src[i - j] != '\0' && i < dstsize - 1 && dstsize > 0)
	{
		*(dst + i) = src[i - j];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
