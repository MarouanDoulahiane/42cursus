/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:25:30 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/10/30 18:38:29 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ss;

	ss = s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (const unsigned char)c)
			return ((void *)&ss[i]);
		i++;
	}
	return (NULL);
}
