/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dtabdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:28:39 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/28 21:28:45 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_2dtabdel(**tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_strdel(&(tab[i]));
		i++;
	}
	tab = NULL;
}