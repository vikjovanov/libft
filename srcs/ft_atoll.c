/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:59:28 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/21 21:08:02 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static long long	convert_to_ll(const char *str, int sign)
{
	int			i;
	long long	number;
	long long	overflow;

	i = 0;
	number = 0;
	while (ft_isdigit(str[i]))
	{
		overflow = number;
		number = (number * 10) + (str[i] - 48);
		if (overflow && (number ^ overflow) < 0)
			return ((sign == 1) ? -1 : 0);
		i++;
	}
	return ((long long)number * sign);
}

/*
** NAME:
** 	ft_atoll
**
** DESCRIPTION:
**	ft_atoll() convertit la chaine de caracteres, passee en parametres,
**	en long long.
**
** SYNOPSIS:
**	int ft_atoll(const char *nptr)
**
** PARAMS:
** 	nptr - chaine de caracteres a convertir
**
** RETURN VALUE:
**	(long long) la valeur convertie
*/

long long			ft_atoll(const char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (!ft_isdigit(str[i + 1]))
				return (0);
			sign = (str[i] == '-' ? -sign : sign);
			i++;
		}
		else
			break ;
	}
	return (convert_to_ll(&str[i], sign));
}
