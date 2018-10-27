/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:44:45 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:35 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_bzero
**
** DESCRIPTION:
**	ft_bzero() ecrase les 'n' premieres valeurs de la memoire pointee par 's'
**	en y ecrivant, a la place, des '\0'.
**
** SYNOPSIS:
**	void ft_bzero(void *s, size_t n)
**
** PARAMS:
** 	s - pointeur sur la memoire a ecraser
**	n - nombre de valeurs a ecraser
**
** RETURN VALUE:
**	Aucune.
*/

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
