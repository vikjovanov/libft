/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:04:51 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:37 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	set_size_array(int n)
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
	return (nb);
}

static void	set_array(char *nbr, int n, int is_negative, int size_array)
{
	while (size_array + is_negative > 0)
	{
		nbr[(size_array + is_negative) - 1] = (n % 10) + 48;
		n /= 10;
		size_array--;
	}
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

char		*ft_itoa(int n)
{
	char	*nbr;
	int		is_negative;
	int		size_array;

	is_negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	size_array = set_size_array(n);
	nbr = ft_strnew(size_array + is_negative);
	if (nbr == NULL)
		return (NULL);
	set_array(nbr, n, is_negative, size_array);
	if (is_negative == 1)
		nbr[0] = '-';
	return (nbr);
}
