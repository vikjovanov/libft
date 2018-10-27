/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:54:19 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:39 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_memccpy
**
** DESCRIPTION:
**	ft_memccpy() copie au plus n octets de la zone mémoire src
**	vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre le caractère c.
**
** SYNOPSIS:
**	void *ft_memccpy(void *dest, const void *src, int c, size_t n)
**
** PARAMS:
** 	dest - la memoire de destination
**	src - la memoire source
**	c - le caractere d'arret
**	n - le nombre de caractere a verifier
**
** RETURN VALUE:
**	(void*) retourne un pointeur sur le caractère immediatement après c
**	dans la zone dest,
**	ou NULL si c n'a pas été trouvé dans les n premiers caractères de src.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;
	unsigned char			ch;

	d = (unsigned char*)dest;
	s = (unsigned const char*)src;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == ch)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}
