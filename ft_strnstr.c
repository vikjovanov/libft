/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 12:48:34 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 19:02:17 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strnstr
**
** DESCRIPTION:
**	ft_strnstr() cherche la première occurrence de la sous-chaîne 'needle'
**	au sein de la chaîne 'haystack'. Seuls les 'n' premiers caracteres sont
**	compares. Les caractères « \0 » de fin ne sont pas comparés.
**
** SYNOPSIS:
**	char *ft_strnstr(const char *haystack, const char *needle, size_t len)
**
** PARAMS:
**	haystack - la chaine dans laquelle on cherche une correspondance
**	needle - la sous-chaine qu'on cherche dans 'haystack'
**	len - la taille du troncon maximum de haystack dans lequel on cherche.
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur le début de la sous-chaîne,
**	ou NULL si celle-ci n'est pas trouvée.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	if (*haystack == '\0')
		return (NULL);
	needle_len = ft_strlen(needle);
	while (haystack[i] && i < len)
	{
		if (i + needle_len > len)
			return (NULL);
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
