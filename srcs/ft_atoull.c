/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:02:46 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/20 16:02:50 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	convert_to_ull(const char *nptr)
{
	int					i;
	unsigned long long	number;

	i = 0;
	number = 0;
	while (ft_isdigit(nptr[i]))
	{
		number = (number * 10) + (nptr[i] - 48);
		i++;
	}
	return (number);
}

/*
** NAME:
** 	ft_atoull
**
** DESCRIPTION:
**	ft_atoull() convertit la chaine de caracteres, passee en parametres,
**	en unsigned long long.
**
** SYNOPSIS:
**	unsigned long long ft_atoull(const char *nptr)
**
** PARAMS:
** 	nptr - chaine de caracteres a convertir
**
** RETURN VALUE:
**	(int) la valeur convertie
*/

unsigned long long	ft_atoull(const char *nptr)
{
	int i;

	i = 0;
	while (nptr[i])
	{
		if (ft_isspace(nptr[i]))
			i++;
		else if (nptr[i] == '+')
		{
			if (!ft_isdigit(nptr[i + 1]))
				return (0);
			i++;
		}
		else
			break ;
	}
	return (convert_to_ull(&nptr[i]));
}
