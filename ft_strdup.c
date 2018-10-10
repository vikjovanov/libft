/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:30:45 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 15:44:48 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strdup
**
** DESCRIPTION:
**	ft_strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui
**	est dupliquée depuis s. La mémoire occupée par cette nouvelle chaîne est
**	obtenue en appelant malloc(3), et doit donc être libérée avec free(3).
**
** SYNOPSIS:
**	char *ft_strdup(const char *src)
**
** PARAMS:
**	src - la chaine de caractere a copier
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur la nouvelle chaine de caracteres,
**	ou NULL si l'allocation a echoue.
*/

char	*ft_strdup(const char *src)
{
	int		size;
	int		i;
	char	*cpy;

	size = ft_strlen(src);
	cpy = (char*)malloc((sizeof(char)) * (size + 1));
	if (cpy == NULL)
		return (NULL);
	cpy[size] = '\0';
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	return (cpy);
}
