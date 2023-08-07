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

// #include <stdio.h>
// int main() {
//     char source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     char destination[10];

//     ft_memmove(source + 2, source, 8);
//     for (int i = 0; i < 10; i++)
//         printf("destination: %d\n", destination[i]);
     
//     for (int i = 0; i < 10; i++)
//         printf("source: %d\n", source[i]);
    
//     return 0;
// }