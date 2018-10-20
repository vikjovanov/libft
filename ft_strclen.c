/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 13:39:04 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/20 13:47:37 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strclen
**
** DESCRIPTION:
**	ft_strclen() calcule la taille d'une chaine de caractere jusqu'au
**	caractere c, si le caractere c n'est pas trouve, la fonction fonctionne
**	comme ft_strlen et retourne la taille de la chaine de caracteres.
**
** SYNOPSIS:
**	size_t ft_strclen(const char *str, int c)
**
** PARAMS:
**	str - la chaine de caractere dont on veut connaitre la taille
**	c - le caractere qui stoppe le calcul
**
** RETURN VALUE:
** 	(size_t) longueur de la chaine de caracteres
*/

size_t		ft_strclen(const char *str, int c)
{
	size_t	size;

	while (*str && *str != c)
		size++;
	return (size);
}