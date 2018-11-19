/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 01:19:13 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/19 01:19:14 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	set_size_array(char n)
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

static void	set_array(char *nbr, char n, int is_negative, int size_array)
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
** 	ft_ctoa
**
** DESCRIPTION:
**	ft_ctoa() convertit une valeur de type char en chaine de caractere
**	et la stocke dans une nouvelle zone de memoire (alloue avec malloc(3))
**
** SYNOPSIS:
**	int *ft_ctoa(char n)
**
** PARAMS:
** 	n - la valeur a convertir
**
** RETURN VALUE:
**	(char*) la valeur convertie
*/

char		*ft_ctoa(char n)
{
	char	*nbr;
	int		is_negative;
	int		size_array;

	is_negative = 0;
	if (n == -128)
		return (ft_strdup("-128"));
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
