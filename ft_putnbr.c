/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:21:28 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:56:44 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_putnbr
**
** DESCRIPTION:
**  ft_putnbr() affiche sur la sortie standard le nombre recu en parametre.
**
** SYNOPSIS:
**  void ft_putnbr(int n)
**
** PARAMS:
**  n - le nombre a afficher
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putnbr(int n)
{
	long nl;

	nl = n;
	if (nl < 0)
	{
		nl = -nl;
		ft_putchar('-');
	}
	if (nl >= 10)
		ft_putnbr(nl / 10);
	ft_putchar(nl % 10 + 48);
}
