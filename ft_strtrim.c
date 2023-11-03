/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:33:45 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/11/01 18:37:05 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	size;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = -1;
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	size = end - start;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	while (++i < size)
		res[i] = s1[start + i];
	res[i] = '\0';
	return (res);
}
