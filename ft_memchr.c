/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:46:14 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 15:43:55 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_memchr
**
** DESCRIPTION:
**	ft_memchr() examine les n premiers octets de la zone mémoire pointée par s
**	à la recherche du caractère c.
** 	Le premier octet correspondant à c arrête l'opération.
**
** SYNOPSIS:
**	void *ft_memchr(const void *s, int c, size_t n)
**
** PARAMS:
**	s - la chaine de caractere
**	c - le caractere a chercher
**	n - le nombre d'octets maximum dans lequel rechercher 'c'
**
** RETURN VALUE:
**	(void*) renvoie un pointeur sur l'octet correspondant,
**	ou NULL si le caractere n'a pas ete trouve.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*src;
	size_t					i;
	unsigned char			ch;

	src = (const unsigned char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == ch)
			return ((unsigned char*)&src[i]);
		i++;
	}
	return (NULL);
}
