/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:38:32 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:50 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strtolower
**
** DESCRIPTION:
**	ft_strtolower() met en minuscule la chaine de caractere s
**
** SYNOPSIS:
**	char *ft_strtolower(char *s)
**
** PARAMS:
**	s - chaine de caractere a mettre en minuscule
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur s
*/

char	*ft_strtolower(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (ft_isupper(s[i]))
			s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
