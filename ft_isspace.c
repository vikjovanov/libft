/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:29:37 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:45:29 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_isspace
**
** DESCRIPTION:
**	ft_isspace() verifie si le caractere passe en parametre est
**	un caractere d'espace (' ', '\t', '\n', '\r', '\v', '\f')
**
** SYNOPSIS:
**	int ft_isspace(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est un caractere d'espace | 0 - il ne l'est pas
*/

int		ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
			c == '\r' || c == 32)
		return (1);
	return (0);
}
