/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 10:11:43 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/09 16:03:46 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strstr
**
** DESCRIPTION:
**	ft_strstr() cherche la première occurrence de la sous-chaîne 'needle'
**	au sein de la chaîne 'haystack'. Les caractères « \0 » de fin
**	ne sont pas comparés.
**
** SYNOPSIS:
**	char *ft_strstr(const char *haystack, const char *needle)
**
** PARAMS:
**	haystack - la chaine dans laquelle on cherche une correspondance
**	needle - la sous-chaine qu'on cherche dans 'haystack'
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur le début de la sous-chaîne,
**	ou NULL si celle-ci n'est pas trouvée.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	i = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
