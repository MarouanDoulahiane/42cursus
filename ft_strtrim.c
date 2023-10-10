/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 06:00:44 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 06:00:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && checker(s1[i], set))
		i++;
	return (i);
}

int	get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i] && checker(s1[i], set))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		start;
	int		end;

	start = get_start(s1, set);
	end = get_end(s1, set);
	i = 0;
	if (start >= end)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc(end - start + 1);
	if (!res)
		return (NULL);
	while (start + i < end && i++ > -1)
		res[i - 1] = s1[start + i - 1];
	res[i] = '\0';
	return (res);
}
