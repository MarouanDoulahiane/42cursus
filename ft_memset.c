#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)str;
    while (n)
    {
        *ptr = (unsigned char)c;
        n--;
        ptr++;
    }
    return (str);
}
