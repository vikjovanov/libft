/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupwc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:00:11 by vjovanov          #+#    #+#             */
/*   Updated: 2018/12/08 14:00:11 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupwc(char *str, char ban)
{
	size_t	new_size;
	size_t	i;
	size_t	j;
	char	*new_str;

	if (str == NULL)
		return (NULL);
	new_size = 0;
	i = -1;
	j = -1;
	while (str[++i])
		if (str[i] != ban)
			new_size++;	
	if (!(new_str = ft_strnew(new_size)))
		return (NULL);
	i = -1;
	while (str[++i])
		if (str[i] != ban)
			new_str[++j] = str[i];
	return (new_str);
}
