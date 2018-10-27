/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 15:25:12 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:40 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_memdel
**
** DESCRIPTION:
**	ft_memdel() prend en paramètre l’adresse d’un pointeur dont la zone pointée
**	doit être libérée avec free(3), puis le pointeur est mis à NULL.
**
** SYNOPSIS:
**	void ft_memdel(void **ap)
**
** PARAMS:
**	ap - l'adresse du pointeur dont la zone pointee doit etre liberee.
**
** RETURN VALUE:
**	Aucune
*/

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
	else
		return ;
}
