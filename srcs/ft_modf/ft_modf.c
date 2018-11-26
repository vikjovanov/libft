/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 22:25:36 by vjovanov          #+#    #+#             */
/*   Updated: 2018/11/25 22:25:37 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



#include <float.h>
#include <stdio.h>


//recuperer uniquement le intpart en faisant un genre de dtoa et ensuite recaster le char en double int

static char*	ft_pow(char *number, int precision)
{
	int	i;
	int	prec;

	i = 0;
	prec = precision;
	while (prec > 0 && number[prec] != '.')
	{
		if (number[prec + 1] >= '5')
		{
			if (number[prec] == '9')
				i++;
			else
			{
				number[prec]++;
				break ;
			}
			prec--;
		}
		else
			break ;
	}
	while (i >= 0)
	{
		number[(precision - i) + 1] = '0';
		i--; 
	}
	return (number);
}

static long double ft_exp(double n, int exp)
{ 
	long double	value_exp;
	int			i;

	value_exp = n;
	i = 0;
	if (exp == 0)
		return (1.0);
	while (i < exp - 1)
	{
		value_exp *= n;
		i++;
	}
	return (value_exp);
}

static int	set_before_comma(double n)
{
	int nb_before_comma;
	double a;

	nb_before_comma = 0;
	a = 1.0;
	if (n < a)
		return (1);
	while (n >= a && a <= DBL_MAX)
	{
		nb_before_comma++;
		a *= 10.0;
	}
	return (nb_before_comma);
}

static int 		exploder(double x, double *ipart, double *fpart, char *stringx)
{
	int i;
	
	*ipart = 0;
	i = 0;
	if (x < 0)
		x *= -1;
	if (!ft_isdigit(stringx[0]))
		i++;
	while (stringx[i])
	{
		*ipart *= 10;
		*ipart += stringx[i] - 48;
		i++;
	}
	//printf("XX: \n\n%f\n", x);
	//printf("string x : \n\n%s\n", stringx);
	//printf("IPART: \n\n%f\n\n", *ipart);
	*fpart = x - *ipart;
	if (stringx[0] == '-')
	{
		*ipart *= -1;
		*fpart *= -1;
	}
	return (1);
}

static int		intdtoa(double x, int is_neg, double *ipart, double *fpart)
{
	int size_array;
	char *stringx;
	double nb;
	int i;

	i = 0;
	nb = x;
		printf("\n");
	if (is_neg)
		nb *= -1;
	size_array = set_before_comma(nb);
	if (!(stringx = ft_strnew(size_array + is_neg)))
		return (0);
	if (is_neg)
		stringx[i++] = '-';
	printf("%f\n", nb);
	while (i < size_array)
	{
		printf("size_array - i : %d | set_before_comma: %d | a : %c\n", size_array - i, set_before_comma(nb), ((int)(nb / ft_exp(10, size_array - i - 1))) + 48);
		stringx[i] = ((int)(nb / ft_exp(10, size_array - i - 1))) + 48;
		nb -= ((stringx[i] - 48) * ft_exp(10, size_array - i - 1));
		printf("nb : %f\n", nb);
		i++;
	}
	ft_pow(stringx, size_array);
	exploder(x, ipart, fpart, stringx);
	return (1);
}

double			ft_modf(double x, double *intpart)
{
	double	fractpart;
	int 	is_neg;

	is_neg = 0;
	if (x < 0)
		is_neg = 1;
	fractpart = 0;
	intdtoa(x, is_neg, intpart, &fractpart);
	return (fractpart);
}
#include <math.h>
int main()
{
	double x = DBL_MAX;
	double intpart;
	double fractpart;

	fractpart = ft_modf(x, &intpart);
	printf("%f = \n%f + \n%f\n\n", x, intpart, fractpart);
	
	fractpart = modf(x, &intpart);
	printf("%f = \n%f + \n%f\n\n", x, intpart, fractpart);
	
	return 0;
}