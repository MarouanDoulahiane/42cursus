#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	result;
	size_t	dest_len;
	size_t	src_len;
	size_t	i;


	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size > dest_len)
		result = dest_len + src_len;
	else
		result = size + src_len;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (result);
}