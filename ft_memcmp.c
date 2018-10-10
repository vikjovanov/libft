/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:35:59 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:24:49 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_memcmp
**
** DESCRIPTION:
**	ft_memcmp() compare les n premiers octets des zones mémoire s1 et s2.
**	Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
**	si s1 est respectivement inférieure, égale ou supérieur à s2.
**
** SYNOPSIS:
**	int ft_memcmp(const void *s1, const void *s2, size_t n)
**
** PARAMS:
**	s1 - la premiere chaine de caractere a comparer
**	s2 - la deuxieme chaine de caractere a comparer
**	n - le nombre d'octets a comparer
**
** RETURN VALUE:
**	(int) renvoie un entier négatif, nul ou positif si
**	les n premiers octets de s1 sont respectivement inférieurs, égaux ou
**	supérieurs aux n premiers octets de s2.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
