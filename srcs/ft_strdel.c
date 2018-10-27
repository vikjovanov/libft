/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:51:11 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:44 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strdel
**
** DESCRIPTION:
**	ft_strdel() prend en paramètre l’adresse d’une chaine de caractères qui
**	doit être libérée avec free(3) et son pointeur mis à NULL.
**
** SYNOPSIS:
**	void ft_strdel(char **as)
**
** PARAMS:
**	as - l'adresse de la chaine de caractere dont la memoire doit etre liberee.
**
** RETURN VALUE:
**	Aucune
*/

void	ft_strdel(char **as)
{
	if (as == NULL || *as == NULL)
		return ;
	ft_memdel((void**)as);
}
