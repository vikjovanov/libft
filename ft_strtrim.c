/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:40:08 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/09 16:04:01 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strtrim
**
** DESCRIPTION:
**	ft_strtrim() alloue (avec malloc(3)) et retourne une copie de la chaine
**	passée en paramètre sans les espaces blancs au debut et à la fin de cette
**	chaine. On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’.
**	Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction
**	renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL.
**
** SYNOPSIS:
**	char *ft_strtrim(char const *s)
**
** PARAMS:
**	s - chaine de caractere a trimmer
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur s
*/

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	start;
	size_t	len;
	size_t	size;

	start = 0;
	if (s == NULL)
		return (NULL);
	while ((s[start] == 32 || s[start] == '\n' || s[start] == '\t') && s[start])
		start++;
	if (start == ft_strlen(s))
		return (ft_strnew(0));
	size = ft_strlen(s) - 1;
	len = (size - start) + 1;
	while ((s[size] == 32 || s[size] == '\n' || s[size] == '\t') && size != 0)
	{
		len = size - start;
		size--;
	}
	str = ft_strsub(s, start, len);
	return (str);
}
