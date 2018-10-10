/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:18:36 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:07:23 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
** 	ft_striteri
**
** DESCRIPTION:
**	ft_striteri() applique la fonction f à chaque caractère de la chaine de
**	caractères passée en paramètre en précisant son index en premier argument.
**	Chaque caractère est passé par adresse à la	fonction f afin de pouvoir
**	être modifié si nécéssaire.
**
** SYNOPSIS:
**	void ft_striteri(char *s, void (*f)(unsigned int, char *))
**
** PARAMS:
**	s - la chaine de caractere a modifier (si necessaire)
**	f - pointeur sur fonction qui fera les actions necessaires a la modification
**
** RETURN VALUE:
**	Aucune
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
