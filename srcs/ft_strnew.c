/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 17:44:06 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:48 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strnew
**
** DESCRIPTION:
**	ft_strnew() alloue (avec malloc(3)) et retourne une chaine de caractère
**	“fraiche” terminée par un ’\0’. Chaque caractère de la chaine est
**	initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.
**
** SYNOPSIS:
**	char *ft_strnew(size_t size)
**
** PARAMS:
**	n - la taille de la chaine de caractere a allouer
**
** RETURN VALUE:
**	(char*) pointeur sur la nouvelle chaine de caracteres 'fraiche'
*/

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
