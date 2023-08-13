#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	new_len;
	size_t	i;
	size_t	index;
	char	*result;

	new_len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			new_len++;
		i++;
	}
	if (!(result = ft_strnew(new_len)))
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			result[index] = s[i];
			index++;
		}
		i++;
	}
	result[index] = '\0';
	return (result);
}