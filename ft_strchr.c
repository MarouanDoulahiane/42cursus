#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
  while (*s != '\0')
  {
    if (*s == c)
      return ((char *)s);
    s++;
  }
  if (*s == c)
    return ((char *)s);
  return (NULL);
}
