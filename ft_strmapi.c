/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:00:47 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:10:08 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strmapi
**
** DESCRIPTION:
**	ft_strmapi() applique la fonction f à chaque caractère de la chaine de
**	caractères passée en paramètre en précisant son index pour créer une
**	nouvelle chaine “fraiche” (avec malloc(3)) résultant des applications
**	successives de f.
**
** SYNOPSIS:
**	char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
**
** PARAMS:
**	s - chaine de caracteres sur laquelle on veut appliquer des modifications
**	f - pointeur sur fonction qui s'occupera des modifications
**
** RETURN VALUE:
**	(char*) pointeur sur la nouvelle chaine de caractere modifie par 'f'
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
