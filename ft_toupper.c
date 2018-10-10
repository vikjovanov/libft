/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:20:46 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:25:38 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_toupper
**
** DESCRIPTION:
**	ft_toupper() met en majuscule le caractere c
**
** SYNOPSIS:
**	char *ft_toupper(int c)
**
** PARAMS:
**	c - caractere a mettre en majuscule
**
** RETURN VALUE:
**	(int) renvoie le caractere c
*/

int		ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
