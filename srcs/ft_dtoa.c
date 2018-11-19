/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:20:10 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/19 01:20:11 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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

static void	set_array(char *nbr, double n, int *aft_is_neg, int size_array)
{
	while (size_array + aft_is_neg[1] > 0)
	{
		if (((size_array + aft_is_neg[1]) - 1) == aft_is_neg[0])
		nbr[(size_array + aft_is_neg[1]) - 1] = (n % 10.0) + 48;
		n /= 10;
		size_array--;
	}
}

static int	set_after_comma(double n)
{
	int nb;
	int a;

	nb = 0;
	a = 1;
	if (n < a)
		return (1);
	while (n <= a)
	{
		nb++;
		a *= 10;
	}
	return (nb);
}

/*
** NAME:
** 	ft_itoa
**
** DESCRIPTION:
**	ft_itoa() convertit une valeur de type integer en chaine de caractere
**	et la stocke dans une nouvelle zone de memoire (alloue avec malloc(3))
**
** SYNOPSIS:
**	int *ft_itoa(int n)
**
** PARAMS:
** 	n - la valeur a convertir
**
** RETURN VALUE:
**	(char*) la valeur convertie
*/
#include <stdio.h>
char		*ft_dtoa(double n)
{
	char	*nbr;
	int		size_array;
	int		aft_is_neg[2];

	aft_is_neg[1] = 0;
	if (n < 0)
	{
		aft_is_neg[1] = 1;
		n *= -1;
	}
	aft_is_neg[0] = set_after_comma(n);
	nbr = ft_strnew(6 + aft_is_neg[1] + aft_is_neg[0] + 1);
	if (nbr == NULL)
		return (NULL);
	set_array(nbr, n, aft_is_neg, size_array);
	if (aft_is_neg[1] == 1)
		nbr[0] = '-';
	return (nbr);
}

int main(void)
{
	double a = 9.45652321;
	printf("%s\n", ft_dtoa(a));
}