/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:54:59 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/11/01 22:12:51 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*res;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_intlen(n);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	res[size] = '\0';
	while (n)
	{
		size--;
		res[size] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}
