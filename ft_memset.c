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


// // Test function to compare your ft_memset with the original memset
// int test_memset(void *str, int c, size_t n, size_t size)
// {
//     void *original_result = memset(str, c, n);
//     void *custom_result = ft_memset(str, c, n);
    
//     if (memcmp(original_result, custom_result, size) == 0)
//         return 1; // Test passed
//     else
//         return 0; // Test failed
// }

// int main() {
//     char buffer[20];

//     // Test 1: Setting characters 'A' in the buffer
//     int test1_result = test_memset(buffer, 'A', 5, sizeof(buffer));
//     printf("Test 1: %s\n", test1_result ? "Passed" : "Failed");

//     // Test 2: Setting characters 'B' in the buffer
//     int test2_result = test_memset(buffer, 'B', 10, sizeof(buffer));
//     printf("Test 2: %s\n", test2_result ? "Passed" : "Failed");

//     // Test 3: Setting characters '\0' (null terminator) in the buffer
//     int test3_result = test_memset(buffer, '\0', sizeof(buffer), sizeof(buffer));
//     printf("Test 3: %s\n", test3_result ? "Passed" : "Failed");

//     // Add more test cases as needed

//     return 0;
// }