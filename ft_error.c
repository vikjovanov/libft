/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 14:28:22 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/08 14:28:32 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** NAME:
**  ft_error
**
** DESCRIPTION:
**  ft_error() affiche le message souhaite avec la syntaxe d'erreur shell
**
** SYNOPSIS:
**  void ft_error(const char *msg)
**
** PARAMS:
**  msg - le message souhaite.
**
** RETURN VALUE:
**  Aucune
*/

void	ft_error(const char *msg)
{
	write(2, "\033[31;1m", 7);
	write(2, "error: ", 7);
	write(2, "\033[0m", 4);
	write(2, msg, ft_strlen(msg));
	write(2, "\n", 1);
}
