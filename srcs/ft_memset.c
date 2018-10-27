/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:45:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:40 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_memset
**
** DESCRIPTION:
**	ft_memset() remplit les n premiers octets de la zone mémoire pointée
**	par s avec l'octet c.
**
** SYNOPSIS:
**	void *ft_memset(void *s, int c, size_t n)
**
** PARAMS:
**	s - la chaine source
**	c - le caractere de remplacement
**	n - le nombre de caracteres remplaces
**
** RETURN VALUE:
**	(void*) pointeur sur s
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
