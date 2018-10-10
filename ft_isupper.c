/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:27:48 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:45:14 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_isupper
**
** DESCRIPTION:
**	ft_isupper() verifie si le caractere passe en parametre est
**	en majuscule (A -> Z)
**
** SYNOPSIS:
**	int ft_isupper(int c)
**
** PARAMS:
** 	c - le caractere a verifier
**
** RETURN VALUE:
**	(int) 1 - le caractere est en majuscule | 0 - il ne l'est pas
*/

int		ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
