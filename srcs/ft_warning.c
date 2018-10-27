/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_warning.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:28:48 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:36:15 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** NAME:
**  ft_warning
**
** DESCRIPTION:
**  ft_warning() affiche le message souhaite avec une syntaxe d'avertissement
**
** SYNOPSIS:
**  void ft_warning(const char *msg)
**
** PARAMS:
**  msg - le message souhaite.
**
** RETURN VALUE:
**  Aucune
*/

void	ft_warning(const char *msg)
{
	write(2, "\033[33;1m", 7);
	write(2, "warning: ", 9);
	write(2, "\033[0m", 4);
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
}
