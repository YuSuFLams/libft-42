/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 06:59:16 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/09 22:45:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	long int	s;

	s = (long int)n;
	str = (char *)malloc(count_nbr(n) + 1 * sizeof(char));
	if (!str)
		return (str);
	i = count_nbr(s);
	str[i] = '\0';
	if (!s)
		str[0] = s + '0';
	if (s < 0)
	{
		str[0] = '-';
		s *= (-1);
	}
	while (s > 0)
	{
		str[i - 1] = (s % 10) + '0';
		s /= 10;
		i--;
	}
	return (str);
}
