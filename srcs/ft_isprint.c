/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:13:00 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:37 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_isprint
**
** DESCRIPTION:
**	ft_isprint() verifie si le caractere passe en parametre est
**	est imprimable.
**
** SYNOPSIS:
**	int ft_isprint(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est imprimable | 0 - il ne l'est pas
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
