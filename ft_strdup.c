/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:46:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/05 08:36:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1 * sizeof(char ));
	if (!str)
		return (str);
	i = -1;
	while (*(s + (++i)))
		*(str + i) = *(s + i);
	str[i] = '\0';
	return (str);
}
