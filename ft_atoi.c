/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouinia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:24:58 by asouinia          #+#    #+#             */
/*   Updated: 2021/11/11 16:25:00 by asouinia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	number_start_index(int *i, const char *str);

int boundires_check(long nbr);

int	ft_atoi(const char *str)
{
	int 	nbr;
	int		*i;
	int		n_p;
	int		ii;

	nbr = 0;
	ii = -1;
	i = &ii;
	n_p = number_start_index(i, str);
	while (str[++(*i)])
	{
		if (ft_isdigit(str[*i]))
		{
			nbr *= 10;
			nbr += str[*i] - '0';
		}
		else
			break ;
	}
	if (n_p)
		nbr *= -1;
	//  printf("=====> %d\n", nbr);
	//  nbr = boundires_check(nbr);
	return (boundires_check(nbr));
}

int	number_start_index(int *i, const char *str)
{
	int	n_p;

	n_p = 0;
	while (str[++(*i)] && ((str[*i] >= 9 && str[*i] <= 13) || (str[*i] == ' ')))
		;
	if (str[*i] == '-')
		n_p = 1;
	if (str[*i] == '+')
		(*i)++;
	if (!n_p)
		(*i)--;
	return (n_p);
}

int boundires_check(long  nbr)
{
	// if (nbr >= -2147483648 && nbr <= 2147483647)
	// {
	// 	return (nbr);
	// }
	// else
	// {
	// 	if (nbr > 2147483647)
	// 		return (2147483647);
	// 	else
	// 		return (-2147483648);
	// }


		if (nbr >= -9223372036854775807 && nbr <= 9223372036854775807)
	{
		return (nbr);
	}
	else
	{
		if (nbr > 9223372036854775807)
			return (-1);
		else
			return (0);
	}


	// if (nbr >= -9223372036854775808 && nbr <= 9223372036854775807)
	// {
	// 	return (nbr);
	// }
	// else
	// {
	// 	if (nbr > 9223372036854775807)
	// 		return ((int) 9223372036854775807);
	// 	else
	// 		return ((int) -9223372036854775808);
	// }
	// if (nbr >= 9223372036854775807)
			// return (0);
	// else
	// 		return ((int) -9223372036854775808);
}