/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:51:07 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 19:19:40 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strncat
**
** DESCRIPTION:
**	ft_strncat() est identique a ft_strcat() a la difference que
**		- Elle ne prend en compte que les 'n' premiers caracteres de src
**		- src n'a pas besoin d'octet nul final si elle contient n carac' ou +
**	Comme pour ft_strcat(), la chaîne résultante dans dest est toujours terminée
**	par un caractère nul. Si src contient n caractères ou plus, ft_strncat()
**	écrit n+1 caractères dans dest (n caractères de src plus l'octet nul final).
**	Aussi, la taille de dest doit être au moins ft_strlen(dest)+n+1.
**
** SYNOPSIS:
**	char *ft_strncat(char *dest, const char *src, size_t n)
**
** PARAMS:
**  dest - la chaine de destination
**	src - la chaine source
**	n - le nombre de caracteres a copier
**
** RETURN VALUE:
**	(char*) pointeur sur dest
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dest);
	i = 0;
	while (i < n && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
