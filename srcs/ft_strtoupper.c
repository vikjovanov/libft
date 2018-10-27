/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:45:06 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:50 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_strtoupper
**
** DESCRIPTION:
**	ft_strtoupper() met en majuscule la chaine de caractere s
**
** SYNOPSIS:
**	char *ft_strtoupper(char *s)
**
** PARAMS:
**	s - chaine de caractere a mettre en majuscule
**
** RETURN VALUE:
**	(char*) renvoie un pointeur sur s
*/

char	*ft_strtoupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (ft_islower(s[i]))
			s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
