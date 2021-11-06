/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:51:14 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/03 16:56:20 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
#define		LIBFT_H
#include <stdlib.h>
int		ft_isalpha(int);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t      ft_strlen(const char *s);
int     ft_toupper(int c);
int     ft_tolower(int c);
char *  ft_strchr(const char *s, int c);

#endif
