/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:21:08 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/19 19:47:02 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_to_int(const char *str, int sign)
{
	int		i;
	long	number;
	long	overflow;

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
	return ((int)number * sign);
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

int			ft_atoi(const char *str)
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
	return (convert_to_int(&str[i], sign));
}
