/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   df_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecollot <ecollot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 16:31:08 by ecollot           #+#    #+#             */
/*   Updated: 2013/12/15 21:48:37 by ecollot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*df_addchar(const char *str, char c)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != c)
		i = i + 1;
	if (i == 0)
		return (NULL);
	if ((ret = (char *)malloc(sizeof(*ret) * (i + 1))) == NULL)
		return (NULL);
	while (j < i)
	{
		ret[j] = str[j];
		j = j + 1;
	}
	ret[j] = '\0';
	return (ret);
}

int		df_nbrword(char const *s, char c)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i = i + 1;
		if (s[i] != '\0')
			word = word + 1;
		while (s[i] != '\0' && s[i] != c)
			i = i + 1;
	}
	return (word);
}

char	**df_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		word;

	i = 0;
	if (s == NULL)
		return (NULL);
	word = df_nbrword(s, c);
	if ((tab = (char **)malloc(sizeof(*tab) * (word + 1))) == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s = s + 1;
		tab[i] = df_addchar(s, c);
		while (*s != '\0' && *s != c)
			s = s + 1;
		i = i + 1;
	}
	tab[word] = NULL;
	return (tab);
}
