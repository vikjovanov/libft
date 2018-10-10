/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:18:54 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:53:45 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_putendl
**
** DESCRIPTION:
**  ft_putendl() affiche (avec write()) la chaine de caractere 's' recu en
**	parametre suivi d'un '\n'.
**
** SYNOPSIS:
**  void ft_putendl(char const *s)
**
** PARAMS:
**  s - la chaine de caractere a afficher
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putendl(char const *s)
{
	if (s == NULL)
		return ;
	ft_putstr(s);
	ft_putchar('\n');
}
