/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:57:16 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:41:15 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_isalnum
**
** DESCRIPTION:
**	ft_isalnum() verifie si le caractere passe en parametre est
**	alphanumerique (a -> Z) (0 -> 9)
**
** SYNOPSIS:
**	int ft_isalnum(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est alphanumerique | 0 - il ne l'est pas
*/

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
