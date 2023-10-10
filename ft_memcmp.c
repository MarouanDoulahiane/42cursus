/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:57:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 16:57:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if (!n)
		return (0);
	while ((size_t)i < n - 1
		&& ((const unsigned char *)s1)[i] == ((const unsigned char *)s2)[i])
	{
		i++;
	}
	return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
}
