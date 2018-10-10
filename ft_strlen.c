/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:45:29 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:08:17 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strlen
**
** DESCRIPTION:
**	ft_strlen() calcule la taille d'une chaine de caractere
**
** SYNOPSIS:
**	size_t ft_strlen(const char *str)
**
** PARAMS:
**	str - la chaine de caractere dont on veut connaitre la taille
**
** RETURN VALUE:
** 	(size_t) longueur de la chaine de caracteres
*/

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
