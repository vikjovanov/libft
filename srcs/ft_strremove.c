/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:36:17 by vjovanov          #+#    #+#             */
/*   Updated: 2018/12/09 17:36:18 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strremove(char *str, int start, int len)
{
	int i;
	char *new;
	int strlen;

	strlen = ft_strlen(str);
	i = 0;
	if (start > strlen - 1)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	new = ft_strnew(strlen - len);
	while (i < start && str[i])
	{
		new[i] = str[i];
		i++;
	}
	i += len;
	while (str[i])
	{
		new[i - len] = str[i];
		i++;	
	}
	return (new);
}