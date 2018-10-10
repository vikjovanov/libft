/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:02:59 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:13:26 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strequ
**
** DESCRIPTION:
**	ft_strequi() compare lexicographiquement s1 et s2. Si les deux chaines
**	sont égales, la fonction retourne 1, ou 0 sinon.
**
** SYNOPSIS:
**	int	ft_strequ(char const *s1, char const *s2)
**
** PARAMS:
**	s1 - la premiere chaine de caractere a comparer
**	s2 - la deuxieme chaine de caractere a comparer
**
** RETURN VALUE:
**	(int) 1 - Les deux chaines sont identiques lexicographiquement
**		  2 - Elles ne sont pas identiques
*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (-1);
	return ((ft_strcmp(s1, s2) == 0) ? 1 : 0);
}
