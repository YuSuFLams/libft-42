/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:47:06 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:44:57 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!n)
		return (NULL);
	while (++i < n)
		if (*(unsigned char *)(s + i) == (unsigned char )c)
			return ((void *)s + i);
	return (NULL);
}
