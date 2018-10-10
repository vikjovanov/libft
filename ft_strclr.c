/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:07:45 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:01:58 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_strclr
**
** DESCRIPTION:
**	ft_strclr() assigne la valeur ’\0’ à tous les caractères de la chaine passée
**	en paramètre.
**
** SYNOPSIS:
**	void ft_strclr(char *s)
**
** PARAMS:
**	s - la chaine de caractere
**
** RETURN VALUE:
**	Aucune
*/

void	ft_strclr(char *s)
{
	if (s == NULL)
		return ;
	ft_memset(s, '\0', ft_strlen(s));
}
