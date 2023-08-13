#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*result;

	if (!(result = malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i <= size)
		result[i++] = '\0';
	return (result);
}