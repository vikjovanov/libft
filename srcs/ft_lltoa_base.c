/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:46:57 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/20 13:46:58 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_size_array(long long number, int base, int is_negative)
{
	int size_array;

	size_array = 0;
	if (is_negative == 0)
		while (number > 0)
		{
			number /= base;
			size_array++;
		}
	else
		while (number < 0)
		{
			number /= base;
			size_array++;
		}
	return (size_array + is_negative);
}

static void	convert(char *nbr, long long number, int base, int is_negative)
{
	int length;

	length = set_size_array(number, base, is_negative);
	if (is_negative == 0)
		while (number > 0)
		{
			if (number % base >= 10)
				nbr[length - 1] = ((number % base) + 'a') - 10;
			else
				nbr[length - 1] = (number % base) + 48;
			number /= base;
			length--;
		}
	else
		while (number < 0)
		{
			if (((number % base) * -1) >= 10)
				nbr[length - 1] = (((number % base) * -1) + 'a') - 10;
			else
				nbr[length - 1] = ((number % base) * -1) + 48;
			number /= base;
			length--;
		}
	if (is_negative == 1)
		nbr[0] = '-';
}

char		*ft_lltoa_base(long long number, int base)
{
	char	*nbr;
	int		length;
	int		is_negative;

	is_negative = 0;
	if (number == 0)
		return (ft_strdup("0"));
	if (base < 2)
		return (NULL);
	if (number < 0)
		is_negative = 1;
	length = set_size_array(number, base, is_negative);
	if ((nbr = ft_strnew(length)) == NULL)
		return (NULL);
	convert(nbr, number, base, is_negative);
	return (nbr);
}
