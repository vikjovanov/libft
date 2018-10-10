/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 09:50:33 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 19:04:03 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strchr
**
** DESCRIPTION:
**	ft_strchr() renvoie un pointeur sur la première occurrence du
**	caractère c dans la chaîne s
**
** SYNOPSIS:
**	char *ft_strchr(const char *s, int c)
**
** PARAMS:
**	s - la chaine de caractere
**	c - le caractere a chercher
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur le caractère correspondant,
**	ou NULL si le caractère n'a pas été trouvé.
*/

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		else if (s[i + 1] == c)
			return ((char*)&s[i + 1]);
		i++;
	}
	return (NULL);
}
