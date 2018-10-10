/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:25:38 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:14:52 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strncpy
**
** DESCRIPTION:
**	ft_strncpy() est identique a ft_strcpy(), sauf que seuls les n premiers
**	octets de src sont copiés.
**	Avertissement : s'il n'y a pas d'octet nul dans les n premiers octets
**	de src, la chaîne résultante dans dest ne disposera pas d'octet nul final.
**
** SYNOPSIS:
**	char *ft_strncpy(char *dest, const char *src, size_t n))
**
** PARAMS:
**	dest - la chaine de destination
**	src - la chaine source
**	n - le nombre de caracteres a copier
**
** RETURN VALUE:
**	(char*) pointeur sur dest
*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
