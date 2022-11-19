/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 06:08:27 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/10 03:25:56 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	s_fst;
	size_t	s_sec;

	if (!s1 || !s2)
		return (NULL);
	s_fst = ft_strlen(s1);
	s_sec = ft_strlen(s2);
	str = (char *)malloc(s_sec + s_fst + 1 * sizeof(char));
	if (!str)
		return (str);
	i = -1;
	while (++i < s_sec + s_fst && s1[i])
		str[i] = s1[i];
	j = -1;
	while (++j < s_sec + s_fst && s2[j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
