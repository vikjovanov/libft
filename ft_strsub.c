/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:20:12 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:19:00 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strsub
**
** DESCRIPTION:
**	ft_strsub() alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
**	tronçon de la chaine de caractères passée en paramètre. Le tronçon commence
**	à l’index start et à pour longueur len. Si start et len ne désignent pas
**	un tronçon de chaine valide, le comportement est indéterminé.
**	Si l’allocation échoue, la fonction renvoie NULL.
**
** SYNOPSIS:
**	char *ft_strsub(char const *s, unsigned int start, size_t len)
**
** PARAMS:
**	s - chaine de caractere dans laquelle on veut recuperer un troncon
**	start - debut du troncon de la chaine de caractere
**	len - longueur du troncon qu'on veut decoupers
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur le troncon
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
