/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 08:53:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/06 10:01:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			counter++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (counter);
}

static void	freesplit(char **s, int i)
{
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	int		n;

	i = 0;
	j = 0;
	n = -1;
	if (!s)
		return (NULL);
	str = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++n < count(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[n] = ft_substr(s, j, i - j);
		if (!str[n])
			return (freesplit(str, 0), NULL);
	}
	return (str[n] = NULL, str);
}
