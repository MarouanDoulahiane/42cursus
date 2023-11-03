/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:44:12 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/10/30 18:38:15 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	i = 0;
	s11 = s1;
	s22 = s2;
	if (!n)
		return (0);
	while (s11[i] == s22[i] && i + 1 < n)
		i++;
	return (s11[i] - s22[i]);
}
