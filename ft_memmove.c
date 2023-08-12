#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char        *d;
    const char  *s;
    char        *lastd;
    const char  *lasts;

    d = dest;
    s = src;
    lastd = dest + (n - 1);
    lasts = src + (n - 1);
    if (d < s)
        while (n--)
            *d++ = *s++;
    else
        while (n--)
            *lastd-- = *lasts--;
    return (dest);       
}
