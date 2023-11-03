/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoulahi <mdoulahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:27:58 by mdoulahi          #+#    #+#             */
/*   Updated: 2023/10/30 18:35:11 by mdoulahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
