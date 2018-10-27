/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 13:52:58 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:36 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_isalpha
**
** DESCRIPTION:
**	ft_isalpha() verifie si le caractere passe en parametre est
**	alphabetique (a -> Z)
**
** SYNOPSIS:
**	int ft_isalpha(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est alphabetique | 0 - il ne l'est pas
*/

int		ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
