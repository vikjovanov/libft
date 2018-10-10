/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:05:09 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:24:04 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_isascii
**
** DESCRIPTION:
**	ft_isascii() verifie si le caractere passe en parametre est
**	en code ASCII.
**
** SYNOPSIS:
**	int ft_isascii(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est en code ASCII | 0 - il ne l'est pas
*/

int		ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && c <= 127)
		return (1);
	return (0);
}
