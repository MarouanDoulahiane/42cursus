#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}


// // Test function to compare your ft_bzero with the original bzero (memset)
// int test_bzero(void *s, size_t n, size_t size)
// {
//     void *original_result = memset(s, 0, n);
//     ft_bzero(s, n);
    
//     if (memcmp(original_result, s, size) == 0)
//         return 1; // Test passed
//     else
//         return 0; // Test failed
// }


// #include <stdio.h>
// int main() {
//     char buffer1[20];
//     char buffer2[20];

//     // Test 1: Zeroing out the entire buffer
//     bzero(buffer1, sizeof(buffer1));
//     ft_bzero(buffer2, sizeof(buffer2));

//     if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0)
//         printf("Test 1 (Zeroing out the entire buffer): Passed\n");
//     else
//         printf("Test 1 (Zeroing out the entire buffer): Failed\n");

//     // Test 2: Zeroing out a portion of the buffer
//     bzero(buffer1, 10);
//     ft_bzero(buffer2, 10);

//     if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0)
//         printf("Test 2 (Zeroing out a portion of the buffer): Passed\n");
//     else
//         printf("Test 2 (Zeroing out a portion of the buffer): Failed\n");

//     // Test 3: Zeroing out a single byte
//     bzero(buffer1, 1);
//     ft_bzero(buffer2, 1);

//     if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0)
//         printf("Test 3 (Zeroing out a single byte): Passed\n");
//     else
//         printf("Test 3 (Zeroing out a single byte): Failed\n");

//     return 0;
// }