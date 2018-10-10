/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:12:58 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:04:15 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strcpy
**
** DESCRIPTION:
**	ft_strcpy() copie la chaîne pointée par src (y compris l'octet nul '\0'
**	final) dans la chaîne pointée par dest. Les deux chaînes ne doivent pas
**	se chevaucher. La chaîne dest doit être assez grande pour
**	accueillir la copie.
**
** SYNOPSIS:
**	char *ft_strcpy(char *dest, const char *src)
**
** PARAMS:
**	dest - la chaine de destination
**	src - la chaine source
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur dest
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
