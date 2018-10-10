/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:07:12 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 13:56:10 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_putendl_fd
**
** DESCRIPTION:
**  ft_putendl_fd() affiche (avec write()) la chaine de caractere 's' recu en
**	parametre sur le 'file descriptor' fd correspondant. Suivi d'un '\n'
**
** SYNOPSIS:
**  void ft_putendl_fd(char const *s, int fd)
**
** PARAMS:
**  s - la chaine de caractere a afficher
**	ft - le file descriptor
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putendl_fd(char const *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
