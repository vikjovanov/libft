/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:20:00 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/28 21:20:01 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tabdel(**tab)
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