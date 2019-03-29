/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_implode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:58:27 by vjovanov          #+#    #+#             */
/*   Updated: 2019/03/29 08:58:29 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_implode(char **tab, char *glue)
{
	int		i;
	char	*new;
	char	*tmp;
	char	*tmp2;

	if (tab == NULL || glue == NULL)
		return (NULL);
	i = -1;
	new = ft_strnew(0);
	tmp = NULL;
	while (tab[++i])
	{
		tmp = tab[i + 1] == NULL ? ft_strdup(tab[i]) : ft_strjoin(tab[i], glue);
		tmp2 = new;
		new = ft_strjoin(new, tmp);
		ft_strdel(&tmp2);
		ft_strdel(&tmp);
	}
	return (new);
}
