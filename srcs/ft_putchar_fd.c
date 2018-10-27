/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:04:13 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:41 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
**  ft_putchar_fd
**
** DESCRIPTION:
**  ft_putchar_fd() affiche (avec write()) le caractere 'c' recu en parametre
**	sur le 'file descriptor' recu en parametre.
**
** SYNOPSIS:
**  void ft_putchar_fd(char c, int fd)
**
** PARAMS:
**  c - le caractere a afficher.
**	fd - le file descriptor sur lequel afficher le caractere
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
