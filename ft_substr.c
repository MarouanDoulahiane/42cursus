/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:16:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 05:16:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		res = malloc(1);
	else if (ft_strlen(s) - start < len)
		res = malloc(ft_strlen(s) - start + 1);
	else
		res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (start < ft_strlen(s) && s[i + start] && i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
