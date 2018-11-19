/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:20:43 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/19 13:32:20 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	set_size_array(long double n)
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

static int	set_before_comma(long double n)
{
	int nb_before_comma;
	int a;
	int nb;

	nb_before_comma = 0;
	a = 1;
	nb = (int)n;
	if (nb < a)
		return (1);
	while (nb >= a)
	{
		nb_before_comma++;
		a *= 10;
	}
	return (nb_before_comma);
}

static void	fill_array(long double n, char *nbr, int is_neg, int nb_bf_comma)
{
	int 	i;
	char*	number;
	int		size_array;
	int		j;

	i = 0;
	size_array = set_size_array(n);
	if (is_neg == 1)
		nbr[i++] = '-';
	nbr[nb_bf_comma + is_neg] = '.';
	while (i < size_array)
	{
		if (nbr[i] == '.')
			i++;
		j = -1;
		number = ft_itoa((int)n);
		while (number[++j])
		{
			nbr[i] = number[j];
			i++;
		}
		n -= ft_atoi(number);
		n *= 10;
	}
}

/*
** NAME:
** 	ft_ldtoa
**
** DESCRIPTION:
**	ft_ldtoa() convertit une valeur de type long double en chaine de caractere
**	et la stocke dans une nouvelle zone de memoire (alloue avec malloc(3))
**
** SYNOPSIS:
**	int *ft_ldtoa(long double n)
**
** PARAMS:
** 	n - la valeur a convertir
**
** RETURN VALUE:
**	(char*) la valeur convertie
*/

char		*ft_ldtoa(long double n)
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
	nb_before_comma = set_before_comma(n);
	if((nbr = ft_strnew(set_size_array(n) + 1 + is_neg)) == NULL)
		return (NULL);
	fill_array(n, nbr, is_neg, nb_before_comma);
	return (nbr);
}

int		main()
{
	long double a = 3.5888745;

	printf("%s\n", ft_ldtoa(a));
	printf("\n");
	printf("%.*Lf\n", set_size_array(a), a);
}