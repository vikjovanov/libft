/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 19:36:17 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:02:31 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_strcat
**
** DESCRIPTION:
**  ft_strcat()  ajoute la chaîne src à la fin de la chaîne dest en écrasant
**	le caractère nul '\0' à la fin de dest, puis en ajoutant un nouveau
**	caractère nul final. Les chaînes ne doivent pas se chevaucher,
**	et la chaîne dest doit être assez grande pour accueillir le résultat.
**
** SYNOPSIS:
**  char *ft_strcat(char *dest, const char *src)
**
** PARAMS:
**  dest - la chaine de destination
**	src - la chaine source
**
** RETURN VALUE:
**  (char*) pointeur sur dest
*/

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
