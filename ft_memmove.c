/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 01:44:58 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 01:44:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	int						i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while ((size_t)i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
