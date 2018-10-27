/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:13:58 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:41 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
**  ft_putstr
**
** DESCRIPTION:
**  ft_putstr() affiche sur la sortie standard la chaine de caracteres recu
**	en parametre.
**
** SYNOPSIS:
**  void ft_putstr(char const *s)
**
** PARAMS:
**  s - la chaine de caractere a afficher
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putstr(char const *s)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}
