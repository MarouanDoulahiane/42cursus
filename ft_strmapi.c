#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
	size_t	i;
	char	*result;

	if (s && f && (result = ft_strnew(ft_strlen(s))))
	{
		i = 0;
		while (s[i])
		{
			result[i] = f(i ,s[i]);
			i++;
		}
		result[i] = '\0';
	}
	return (result);
}