/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:47:03 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/20 13:47:04 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	set_size_array(unsigned int number, int base)
{
	int size_array;

	size_array = 0;
	while (number > 0)
	{
		number /= base;
		size_array++;
	}
	return (size_array);
}

static void	convert(char *nbr, unsigned int number, int base)
{
	int length;

	length = set_size_array(number, base);
	while (number > 0)
	{
		if (number % base >= 10)
			nbr[length - 1] = ((number % base) + 'a') - 10;
		else
			nbr[length - 1] = (number % base) + 48;
		number /= base;
		length--;
	}
}

char		*ft_uitoa_base(unsigned int number, int base)
{
	char	*nbr;
	int		length;

	if (number == 0)
		return (ft_strdup("0"));
	if (base < 2)
		return (NULL);
	length = set_size_array(number, base);
	if ((nbr = ft_strnew(length)) == NULL)
		return (NULL);
	convert(nbr, number, base);
	return (nbr);
}
