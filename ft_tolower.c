/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:20:54 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:25:29 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_tolower
**
** DESCRIPTION:
**	ft_tolower() met en minuscule le caractere c
**
** SYNOPSIS:
**	char *ft_tolower(int c)
**
** PARAMS:
**	c - caractere a mettre en minuscule
**
** RETURN VALUE:
**	(int) renvoie le caractere c
*/

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
