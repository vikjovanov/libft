/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 13:41:50 by vjovanov          #+#    #+#             */
/*   Updated: 2018/12/08 13:41:51 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strreplace(char *str, char needle, char replace)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == needle)
			str[i] = replace;
		i++;
	}
}
