/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitfunc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 13:00:58 by vjovanov          #+#    #+#             */
/*   Updated: 2019/04/06 13:00:58 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_countletter(char const *s, int f(int))
{
	size_t	i;
	size_t	countletter;

	i = 0;
	countletter = 0;
	while (s[i])
	{
		if (f(s[i]) != 1 && f(s[i + 1]) != 1 && s[i + 1] != '\0')
			countletter++;
		else if (f(s[i]) == 1 && f(s[i - 1]) != 1)
			break ;
		i++;
	}
	countletter++;
	return (countletter);
}

static size_t	ft_countwords(char const *s, int f(int))
{
	size_t	i;
	size_t	countwords;

	countwords = 0;
	i = 0;
	if (f(s[0]) != 1)
	{
		countwords++;
		i++;
	}
	while (s[i])
	{
		if (f(s[i]) != 1 && f(s[i - 1]) == 1)
			countwords++;
		i++;
	}
	return (countwords);
}

static char		*ft_word(char const *s, int f(int))
{
	char	*str;
	size_t	i;
	size_t	letter;

	letter = ft_countletter(s, f);
	str = ft_strnew(letter);
	i = 0;
	while (i < letter)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

static void		*ft_remove(char **str, int index)
{
	while (index >= 0)
	{
		free(str[index]);
		index--;
	}
	free(str);
	return (NULL);
}

char			**ft_strsplitfunc(char const *s, int f(int))
{
	size_t	i;
	size_t	k;
	char	**str;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	str = (char**)malloc(sizeof(char*) * (ft_countwords(s, f)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[k])
	{
		if ((f(s[k]) == 1 && f(s[k + 1]) != 1 && s[k + 1] != '\0') ||
			(k == 0 && f(s[k]) != 1))
		{
			str[i] = ft_word((k == 0 && f(s[k]) != 1) ? &s[k] : &s[k + 1], f);
			if (str[i] == NULL)
				return (ft_remove(str, i));
			i++;
		}
		k++;
	}
	str[i] = 0;
	return (str);
}
