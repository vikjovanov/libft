/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:02:04 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:49 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strrchr
**
** DESCRIPTION:
**	ft_strrchr() renvoie un pointeur sur la dernière occurrence du
**	caractère c dans la chaîne s
**
** SYNOPSIS:
**	char *ft_strrchr(const char *s, int c)
**
** PARAMS:
**	s - la chaine de caractere dans laquelle on cherche
**	c - caractere qu'on cherche dans 's'
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur le caractère correspondant,
**	ou NULL si le caractère n'a pas été trouvé
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*occ;
	int		is_occ;

	i = 0;
	is_occ = 0;
	if (*s == '\0' && c == '\0')
		return ((char*)s);
	while (s[i])
	{
		if (s[i] == c)
		{
			occ = (char*)&s[i];
			is_occ = 1;
		}
		if (s[i + 1] == c)
		{
			occ = (char*)&s[i + 1];
			is_occ = 1;
		}
		i++;
	}
	if (is_occ)
		return (occ);
	return (NULL);
}
