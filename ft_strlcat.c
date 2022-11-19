/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:12:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:27:29 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = -1;
	if ((!dstsize && !dst) || !dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen > dstsize)
		return (slen + dstsize);
	while ((++i)[src] && i + dlen < dstsize - 1)
		(i + dlen)[dst] = i[src];
	(i + dlen)[dst] = '\0';
	return (dlen + slen);
}
