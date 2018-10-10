/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:12 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/09 19:18:43 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strlcat
**
** DESCRIPTION:
**	ft_strcat() est une version securisee de 'ft_strncat' qui permet d'eviter
**	les overflows et les problemes de memoires.
** 	strclat() ajoute la chaine src a la chaine dest, ce qui sera rajoute a dest
** 	sera egale a :
** 	size - longueur de dest - 1
**
** SYNOPSIS:
**	size_t ft_strlcat(char *dst, const char *src, size_t size)
**
** PARAMS:
**	dst - la chaine de destination
**	src - la chaine source
**	size - la longueur totale de dest apres concatenation
**
** RETURN VALUE:
** 	(si size >= longueur dest) longueur de dest + longueur de src
** 	(si size < longueur dest) longueur de src + size
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int sizei;
	int	dest_size;
	int	src_size;

	sizei = (int)size;
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (sizei < dest_size)
		return (src_size + sizei);
	i = 0;
	while (i < (sizei - dest_size - 1))
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}
