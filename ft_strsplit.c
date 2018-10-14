/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjovanov <vjovanov@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:13:45 by vjovanov          #+#    #+#             */
/*   Updated: 2018/10/14 09:40:22 by vjovanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	if (s[0] != c && s[0] != '\0')
		words++;
	while (s[i])
	{
		if (s[i] == c)
			if (s[i + 1] != c && s[i + 1] != '\0')
				words++;
		i++;
	}
	return (words);
}

static void		create_memwords(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	nb_letter;

	i = 0;
	j = 0;
	if (s[0] == c)
		i = 1;
	while (s[i])
	{
		if (s[i] != c)
			nb_letter++;
		else
		{
			if (s[i - 1] != c)
			{
				str[j] = ft_strnew(nb_letter);
				j++;
				nb_letter = 0;
			}
		}
		i++;
	}
	if (s[i - 1] != c && *s)
		str[j] = ft_strnew(nb_letter);
}

static void		spliter(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	first;

	i = 0;
	j = 0;
	k = 0;
	first = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			first = 1;
			str[j][k] = s[i];
			k++;
		}
		if (s[i] == c)
			if (s[i + 1] != c && first == 1)
			{
				j++;
				k = 0;
			}
		i++;
	}
}

static int		check_malloc(char **str, size_t words)
{
	size_t i;

	i = 0;
	while (i < words)
	{
		if (str[i] == NULL)
			break ;
		i++;
	}
	if (i != words)
	{
		i = 0;
		while (i < words)
		{
			free(str[i]);
			i++;
		}
		free(str[i]);
		return (0);
	}
	return (1);
}

/*
** NAME:
** 	ft_strsplit
**
** DESCRIPTION:
**	ft_strsplit() alloue (avec malloc(3)) et retourne un tableau de chaines de
**	caractères “fraiches” (toutes terminées par un ’\0’, le tableau également
**	donc) résultant de la découpe de s selon le caractère c. Si l’allocation
**	echoue, la fonction retourne NULL.
**		Exemple :
**		ft_strsplit("*salut*les***etudiants*", ’*’)
**		renvoie le tableau ["salut", "les", "etudiants"].
**
** SYNOPSIS:
**	char **ft_strsplit(char const *s, char c)
**
** PARAMS:
**	s - la chaine de caractere qu'on veut splitter
**	c - le caractere selon lequel decouper la chaine
**
** RETURN VALUE:
**	(char**) Le tableau de chaines de caractères “fraiches” résultant de la
**	découpe
*/

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	str = (char**)malloc(sizeof(char*) * (words + 1));
	if (str == NULL)
		return (NULL);
	str[words] = 0;
	create_memwords(s, c, str);
	if (!(check_malloc(str, words)))
	{
		free(str);
		return (NULL);
	}
	spliter(s, c, str);
	return (str);
}
