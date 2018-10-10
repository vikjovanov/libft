/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:12:28 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:53:08 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_putchar
**
** DESCRIPTION:
**  ft_putchar() affiche (avec write()) le caractere 'c' recu en parametre.
**
** SYNOPSIS:
**  void ft_putchar(char c)
**
** PARAMS:
**  c - le caractere a afficher.
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
