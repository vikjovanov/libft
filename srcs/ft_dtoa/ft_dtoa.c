/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:20:10 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/19 16:35:21 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dtoa.h"




#include <stdio.h>
#include <limits.h>
#include <float.h>

static int	set_size_array(double n)
{
	int		nb;

	nb = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		nb++;
	}
	return (nb + 1);
}

static int	set_before_comma(double n)
{
	int nb_before_comma;
	double a;

	nb_before_comma = 0;
	a = 1.0;
	if (n < a)
		return (1);
	while (n >= a && a <= DBL_MAX)
	{
		nb_before_comma++;
		a *= 10.0;
	}
	return (nb_before_comma);
}

static void	fill_array(double n, char *nbr, int is_neg, int nb_before_comma)
{
	int 		i;
	char*		number;
	int			size_array;
	int			j;
	long long 	ntmp;

	i = 0;
	size_array = set_size_array(n);
	if (is_neg == 1)
		nbr[i++] = '-';
	nbr[nb_before_comma + is_neg] = '.';
	while (i < size_array)
	{
		if (nbr[i] == '.')
			i++;
		j = -1;
		number = set_number(n);
		while (number[++j])
		{
			nbr[i] = number[j];
			i++;
		}
		while (n > LONG_MAX)
			n -= LONG_MAX;
		ntmp = (long long)n;
		printf("%ld\n", ntmp);
		printf("%ld\n", LONG_MAX);
		n -= ntmp;
		n *= 10;
	}
}

/*
** NAME:
** 	ft_dtoa
**
** DESCRIPTION:
**	ft_dtoa() convertit une valeur de type double en chaine de caractere
**	et la stocke dans une nouvelle zone de memoire (alloue avec malloc(3))
**
** SYNOPSIS:
**	int *ft_dtoa(double n)
**
** PARAMS:
** 	n - la valeur a convertir
**
** RETURN VALUE:
**	(char*) la valeur convertie
*/

char		*ft_dtoa(double n)
{
	char	*nbr;
	int		nb_before_comma;
	int		is_neg;

	is_neg = 0;
	if (n < 0.0)
	{
		is_neg = 1;
		n *= -1.0;
	}
	if (check_float_precision(n))
		return (1);
	nb_before_comma = set_before_comma(n);
	if((nbr = ft_strnew(set_size_array(n) + 1 + is_neg)) == NULL)
		return (NULL);
	fill_array(n, nbr, is_neg, nb_before_comma);
	return (nbr);
}

int		main()
{
	printf("%s\n", ft_dtoa(DBL_MAX));
	return 0;
}
