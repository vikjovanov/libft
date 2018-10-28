/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextsqrt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 20:46:39 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/28 20:46:40 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_nextsqrt(int nb)
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
	return (ft_nextsqrt(nb + 1));
}
