#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	if (!(result = malloc(size)))
		return (NULL);
	ft_bzero(result, size);
	return (result);
}