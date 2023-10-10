/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 04:32:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 04:32:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = ft_strlen(dst);
	if (!size)
		return (ft_strlen(src));
	while (src[i] && i + d < size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	if (size < d)
		return (ft_strlen(src) + size);
	return (d + ft_strlen(src));
}
