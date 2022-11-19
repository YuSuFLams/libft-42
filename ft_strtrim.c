/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 06:49:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/06 09:57:35 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_char(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && test_char(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && s1[j - 1] && test_char(set, s1[j - 1]))
		j--;
	str = (char *)malloc(j - i + 1 * sizeof(char));
	if (!str)
		return (str);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
