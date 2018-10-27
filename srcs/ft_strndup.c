/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:45:38 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:47 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strndup
**
** DESCRIPTION:
**	ft_strndup() est identique a ft_strdup(), mais ne copie au plus que
**	n caractères. Si s est plus grande que n, seuls n caractères sont copiés,
**	et un octet nul '\0' est ajouté.
**
** SYNOPSIS:
**	char *ft_strndup(const char *s, size_t n))
**
** PARAMS:
**	s - la chaine de caracteres a copier
**	n - le nombre maximum de caracteres a copier
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur la nouvelle chaine de caracteres,
**	ou NULL si l'allocation a echoue.
*/

char	*ft_strndup(const char *s, size_t n)
{
	size_t	size;
	size_t	i;
	char	*cpy;

	size = ft_strlen(s);
	if (n > size)
		n = size;
	cpy = (char*)malloc((sizeof(char)) * (n + 1));
	if (cpy == NULL)
		return (NULL);
	cpy[n] = '\0';
	i = 0;
	while (s[i] && i < n)
	{
		cpy[i] = s[i];
		i++;
	}
	return (cpy);
}
