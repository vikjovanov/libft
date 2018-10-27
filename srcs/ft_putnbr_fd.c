/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:08:00 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:41 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
**  ft_putnbr_fd
**
** DESCRIPTION:
**  ft_putnbr_fd() affiche sur le 'file descriptor' fd correspondant
**	0le nombre recu en parametre.
**
** SYNOPSIS:
**  void ft_putnbr_fd(int n, int fd)
**
** PARAMS:
**  n - le nombre a afficher
**	fd - le file descriptor
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putnbr_fd(int n, int fd)
{
	long nl;

	nl = n;
	if (nl < 0)
	{
		nl = -nl;
		ft_putchar_fd('-', fd);
	}
	if (nl >= 10)
		ft_putnbr_fd((nl / 10), fd);
	ft_putchar_fd((nl % 10 + 48), fd);
}
