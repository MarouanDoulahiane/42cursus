#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s || start >= ft_strlen(s))
		return (NULL);
	if (!(result = ft_strnew(ft_strlen(s))))
		return (NULL);
	ft_strncpy(result, s + start, len);
	return (result);
}