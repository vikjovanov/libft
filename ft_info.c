/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:28:57 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:36:31 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_info
**
** DESCRIPTION:
**  ft_info() affiche le message souhaite avec une syntaxe d'informations
**
** SYNOPSIS:
**  void ft_info(const char *msg)
**
** PARAMS:
**  msg - le message souhaite.
**
** RETURN VALUE:
**  Aucune
*/

void	ft_info(const char *msg)
{
	write(2, "\033[36;1m", 7);
	write(2, "info: ", 6);
	write(2, "\033[0m", 4);
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
}
