#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		cc;
	size_t				i;

	src = s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if (src[i] == cc)
			return ((void *)&src[i]);
		i++;
	}
	return (NULL);
}
