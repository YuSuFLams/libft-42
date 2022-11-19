/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:11:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:11:12 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if ((unsigned char )c == 0)
		return ((char *)s + ft_strlen(s));
	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == (unsigned char )c)
			return ((char *)(s + i));
	return (NULL);
}
