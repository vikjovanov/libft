/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:27:58 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:37 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_islower
**
** DESCRIPTION:
**	ft_islower() verifie si le caractere passe en parametre est
**	en minuscule (a -> z)
**
** SYNOPSIS:
**	int ft_islower(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est en minuscule | 0 - il ne l'est pas
*/

int		ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
