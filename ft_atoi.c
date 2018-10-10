/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:21:08 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/09 19:32:51 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_over_long(const char *nptr, int i, int is_negative)
{
	size_t	size;

	size = 0;
	while (ft_isdigit(nptr[i + size]) &&
			size != ft_strlen("9223372036854775807"))
		size++;
	if (size == ft_strlen("9223372036854775807") && !is_negative)
	{
		if (ft_strcmp(&nptr[i], "9223372036854775807") >= 0)
			return (-1);
		else
			return (1);
	}
	else if (size == ft_strlen("9223372036854775808") && is_negative)
	{
		if (ft_strcmp(&nptr[i], "9223372036854775808") >= 0)
			return (0);
		else
			return (1);
	}
	return (1);
}

static int	find_index(const char *nptr)
{
	int i;

	i = 0;
	while (nptr[i])
	{
		if (ft_isalpha(nptr[i]))
			return (-1);
		else if (ft_isspace(nptr[i]))
			i++;
		else if (ft_isdigit(nptr[i]))
			return (i);
		else if (nptr[i] == '+' || nptr[i] == '-')
		{
			if (ft_isdigit(nptr[i + 1]))
				return (i + 1);
			else
				return (-1);
		}
		else
			return (-1);
	}
	return (0);
}

/*
** NAME:
** 	ft_atoi
**
** DESCRIPTION:
**	ft_atoi() convertit la chaine de caracteres, passee en parametres,
**	en integer.
**
** SYNOPSIS:
**	int ft_atoi(const char *nptr)
**
** PARAMS:
** 	nptr - chaine de caracteres a convertir
**
** RETURN VALUE:
**	(int) la valeur convertie
*/

int			ft_atoi(const char *nptr)
{
	int	i;
	int	is_negative;
	int	nbr;
	int	over_long;

	i = find_index(nptr);
	is_negative = 0;
	nbr = 0;
	if (i == -1)
		return (0);
	if (nptr[i - 1] == '-')
		is_negative = 1;
	over_long = is_over_long(nptr, i, is_negative);
	if (over_long == 0 || over_long == -1)
		return (over_long);
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
			break ;
		nbr *= 10;
		nbr += nptr[i++] - 48;
	}
	if (is_negative)
		nbr = (nbr * -1);
	return (nbr);
}
