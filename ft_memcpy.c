/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:27:07 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:49:27 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_memcpy
**
** DESCRIPTION:
**	ft_memcmp() copie n octets depuis la zone mémoire src vers la zone
**	mémoire dest. Les deux zones ne doivent pas se chevaucher.
**	Si c'est le cas, plutot utiliser "ft_memmove()".
**
** SYNOPSIS:
**	void *ft_memcpy(void *dest, const void *src, size_t n)
**
** PARAMS:
**	dest - la chaine de destination
**	src - la chaine source
**	n - le nombre d'octets a copier depuis 'src'
**
** RETURN VALUE:
**	(void*) renvoie un pointeur sur dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char*)dest;
	s = (const char*)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
