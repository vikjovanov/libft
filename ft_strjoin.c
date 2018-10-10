/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:26:36 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:08:52 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strjoin
**
** DESCRIPTION:
**	ft_strjoin() alloue (avec malloc(3)) et retourne une chaine de caractères
**	“fraiche” terminée par un ’\0’ résultant de la concaténation
**	de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
**
** SYNOPSIS:
**	char *ft_strjoin(char const *s1, char const *s2)
**
** PARAMS:
**	s1 - la premiere chaine de caractere
**	s2 - la deuxieme chaine de caractere qui va se joindre a la premiere
**
** RETURN VALUE:
**	La chaine de caractère “fraiche” résultant de la concaténation
**	des deux chaines.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (str == NULL)
		return (NULL);
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
