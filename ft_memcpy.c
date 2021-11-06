/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:02:56 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/06 18:02:58 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = -1;
	// while (++i < n && (dst || src))
	while (++i < n && dst && src)
	{
		*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
	}
	return (dst);
}
