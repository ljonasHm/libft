/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:41:52 by ljonas            #+#    #+#             */
/*   Updated: 2019/09/25 21:52:22 by ljonas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	*ft_freemas(char **mas, size_t i)
{
	size_t j;

	j = 0;
	while (j <= i)
	{
		free(mas[j]);
		mas[j] = NULL;
		j++;
	}
	free(mas);
	mas = NULL;
	return (NULL);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	a;
	char	**mas;

	if (s == NULL)
		return (NULL);
	if (!(mas = (char**)malloc(sizeof(*mas) * ft_words(s, c))))
		return (NULL);
	a = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = i;
			while (s[i] != c)
				i++;
			if (!(mas[a] = ft_strndup(s + j, i - j)))
				return (ft_freemas(mas, a));
			a++;
		}
	}
	return (mas);
}
