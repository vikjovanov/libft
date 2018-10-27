/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 20:05:50 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/27 15:22:42 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
**  ft_putstr_fd
**
** DESCRIPTION:
**  ft_putstr_fd() affiche sur le 'file descriptor' fd correspondant
**	la chaine de caracteres recu en parametre.
**
** SYNOPSIS:
**  void ft_putstr_fd(char const *s, int fd)
**
** PARAMS:
**  s - la chaine de caractere a afficher
**	fd - le file descriptor
**
** RETURN VALUE:
**  Aucune
*/

void	ft_putstr_fd(char const *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
