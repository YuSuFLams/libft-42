/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:56:30 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:15:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	if (!len)
		return (NULL);
	i = -1;
	while (++i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (j + i < len && haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		}
	}
	return (NULL);
}
