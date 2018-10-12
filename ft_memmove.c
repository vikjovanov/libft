/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 23:29:51 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 15:33:35 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_memmove
**
** DESCRIPTION:
**	ft_memmove() copie n octets depuis la zone mémoire src vers la
**	zone mémoire dest. Les deux zones peuvent se chevaucher :
**	la copie se passe comme si les octets de src étaient d'abord copiés dans
**	une zone temporaire qui ne chevauche ni src ni dest, et les octets sont
**	ensuite copiés de la zone temporaire vers dest.
**
** SYNOPSIS:
**	void *ft_memmove(void *dest, const void *src, size_t n
**
** PARAMS:
**	dest - la chaine de destination
**	src - la chaine source
**	n - le nombre d'octets a copier
**
** RETURN VALUE:
**	(void*) pointeur sur dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char*)dest;
	s = (const char*)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (d);
}
