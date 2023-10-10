/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 02:07:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 02:07:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(char const *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			size++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (size);
}

char	*get_word(int *index, char const *s, char c)
{
	char	*res;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	while (s[*index] != c && s[*index])
	{
		(*index)++;
		size++;
	}
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = s[*index - size + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**free2d(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (NULL);
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wc;
	int		i;
	int		index;

	if (!s)
		return (NULL);
	wc = counter(s, c);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	i = 0;
	index = 0;
	while (i < wc)
	{
		arr[i] = get_word(&index, s, c);
		if (!arr[i])
			return (free2d(arr));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
