/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 02:34:00 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 02:34:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (!small[0])
		return ((char *)big);
	while (big[i] && (size_t)i < len)
	{
		j = 0;
		while ((size_t)i + j < len && big[i + j] && small[j])
		{
			if (big[i + j] == small[j])
				j++;
			else
				break ;
		}
		if (!small[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
