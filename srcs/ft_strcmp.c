/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:50:27 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:43 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strcmp
**
** DESCRIPTION:
**	ft_strcmp() compare les deux chaînes s1 et s2. Elle renvoie un entier
**	négatif, nul, ou positif, si s1 est respectivement inférieure,
**	égale ou supérieure à s2.
**
** SYNOPSIS:
**	int	ft_strcmp(const char *s1, const char *s2)
**
** PARAMS:
**	s1 - la premiere chaine de caractere a comparer
**	s2 - la deuxieme chaine de caractere a comparer
**
** RETURN VALUE:
**	(int) renvoie un entier inférieur, égal ou supérieur à zéro si s1
**	est respectivement inférieure, égale ou supérieure à s2.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned const char *str1;
	unsigned const char *str2;

	str1 = (unsigned const char*)s1;
	str2 = (unsigned const char*)s2;
	if (*str1 != *str2)
		return (*str1 - *str2);
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	if (*str1 == *str2)
		return (ft_strcmp((const char*)str1 + 1, (const char*)str2 + 1));
	return (0);
}
