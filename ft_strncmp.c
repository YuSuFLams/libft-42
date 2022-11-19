/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:54:37 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:16:38 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = -1;
	while (++i < n && (s1[i] || s2[i]))
		if (s1[i] != s2[i])
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
	return (0);
}
