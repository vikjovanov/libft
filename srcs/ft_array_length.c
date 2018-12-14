/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:49:31 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/17 18:51:38 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_array_length(void **tab)
{
	char	**array;
	int		i;

	i = 0;
	array = (char**)tab;
	while (array[i])
		i++;
	return (i);
}
