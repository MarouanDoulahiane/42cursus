#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*result;

	if (s && f && (result = ft_strnew(ft_strlen(s))))
	{
		i = 0;
		while (s[i])
		{
			result[i] = f(s[i]);
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}