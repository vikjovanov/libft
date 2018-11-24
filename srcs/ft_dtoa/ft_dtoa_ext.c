/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa_ext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:14:27 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/24 15:14:28 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dtoa.h"

static long double ft_exp(double n, int exp)
{
	long double	value_exp;
	int			i;

	value_exp = n;
	i = 0;
	if (exp == 0)
		return (1.0);
	while (i < exp - 1)
	{
		value_exp *= n;
		i++;
	}
	return (value_exp);
}

char				*set_number(double n)
{
	int i;
	double nb;
	int size_array;
	char *nbr;
	int a;

	a = 0;
	nb = n;
	size_array = 0;
	i = 0;
	while (nb > 1.0)
	{
		nb /= 10.0;
		size_array++;
	}
	if (!(nbr = ft_strnew(size_array)))
		return (NULL);
	while (size_array > 0)
	{
		a = (int)(n / (ft_exp(10.0, size_array - 1)));
		nbr[i] = a + 48;
		n -= (double)a * ft_exp(10.0, size_array - 1);
		size_array--;
		i++;
	}
	return (nbr);
}
