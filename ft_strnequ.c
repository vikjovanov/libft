/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:16:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:14:09 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strnequ
**
** DESCRIPTION:
**	ft_strnequ() compare lexicographiquement s1 et s2 jusqu’à n caractères
**	maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux chaines sont
**	égales, la fonction retourne 1, ou 0 sinon.
**
** SYNOPSIS:
**	int	ft_strnequ(char const *s1, char const *s2, size_t n))
**
** PARAMS:
**	s1 - la premiere chaine de caractere a comparer
**	s2 - la deuxieme chaine de caractere a comparer
**	n - le nombre maximum de caracteres a comparer
**
** RETURN VALUE:
**	(int) 1 - Les deux chaines sont identiques lexicographiquement
**		  2 - Elles ne sont pas identiques
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (-1);
	return ((ft_strncmp(s1, s2, n) == 0) ? 1 : 0);
}
