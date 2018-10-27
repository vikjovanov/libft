/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 18:13:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:45 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
** 	ft_striter
**
** DESCRIPTION:
**	ft_striter() applique la fonction 'f' à chaque caractère de la chaine de
**	caractères passée en paramètre. Chaque caractère est passé
**	par adresse à la fonction 'f' afin de pouvoir être modifié si nécéssaire.
**
** SYNOPSIS:
**	void ft_striter(char *s, void (*f)(char *))
**
** PARAMS:
**	s - la chaine de caractere a modifier (si necessaire)
**	f - pointeur sur fonction qui fera les actions necessaires a la modification
**
** RETURN VALUE:
**	Aucune
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
