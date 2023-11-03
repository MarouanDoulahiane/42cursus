/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:38:21 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/11/01 18:42:07 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && !dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] && i + dst_len < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
