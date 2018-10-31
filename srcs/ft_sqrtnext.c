/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 01:40:21 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/31 01:42:02 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_sqrtnext(int nb)
{
	int i;
	int res;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		res = i * i;
		if (nb == res)
			return (i);
		i++;
	}
	if (res == nb)
		return (i);
	return (ft_sqrtnext(nb + 1));
}
