/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:17:19 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/07 16:17:21 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		k;
	int		max;

	max = dstsize;
	i = -1;
	while (src[++i] != '\0')
	{
	}
	k = -1;
	while (++k < max - 1 && k < i)
		*(dst + k) = src[k];
	*(dst + k) = '\0';
	return (iŒŒ);
	}
