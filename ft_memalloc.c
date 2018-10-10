/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:00:05 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:45:47 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_memalloc
**
** DESCRIPTION:
**	ft_memalloc() alloue (avec malloc(3)) une zone memoire de taille 'size'
**	et l'initialise a 0. Si l'allocation echoue, la fonction renvoie NULL.
**
** SYNOPSIS:
**	void *ft_memalloc(size_t size)
**
** PARAMS:
** 	size - la taille de la zone a allouer
**
** RETURN VALUE:
**	(void*) la zone de memoire alloue
*/

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	return (ft_memset(str, 0, size));
}
