/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:21:57 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:13:00 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i > 0)
	{
		if (*(s + i) == (unsigned char )c)
			return ((char *)(s + i));
	}
	if (*s == (unsigned char )c)
		return ((char *)s);
	return (NULL);
}
