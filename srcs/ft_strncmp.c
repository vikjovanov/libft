/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:19:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:47 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strncmp
**
** DESCRIPTION:
**	ft_strncmp() est identique a ft_strcmp() sauf qu'elle ne compare
**	que les n (au plus) premiers caractères de s1 et s2
**
** SYNOPSIS:
**	int	ft_strncmp(const char *s1, const char *s2, size_t n)
**
** PARAMS:
**	s1 - la premiere chaine de caractere a comparer
**	s2 - la deuxieme chaine de caractere a comparer
**	n - le nombre de caracteres maximum a comparer
**
** RETURN VALUE:
**	(int) renvoie un entier inférieur, égal ou supérieur à zéro si s1
**	est respectivement inférieure, égale ou supérieure à s2.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;

	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	if (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (*str1 == '\0' && *str2 == '\0')
			return (0);
		if (*str1 == *str2)
			return (ft_strncmp((const char*)str1 + 1,
						(const char*)str2 + 1, n - 1));
	}
	return (0);
}
