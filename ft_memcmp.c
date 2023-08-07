#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			break ;
		s1++;
		s2++;	
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// #include <stdio.h>
// int main() {
//     // Test 1: Equal strings
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, world!";
//     size_t compare_length1 = strlen(str1);

//     int result1 = ft_memcmp(str1, str2, compare_length1);
//     printf("Result 1: %d\n", result1); // Expected: 0

//     // Test 2: Different strings
//     char str3[] = "Hello, world!";
//     char str4[] = "Hello, there!";
//     size_t compare_length2 = strlen(str3);

//     int result2 = memcmp(str3, str4, compare_length2);
//     printf("Result 2: %d\n", result2); // Expected: x > 0

//     // Test 3: Partial comparison
//     char str5[] = "Hello, world!";
//     char str6[] = "Hello, universe!";
//     size_t compare_length3 = 6; // Compare only the first 6 characters

//     int result3 = ft_memcmp(str5, str6, compare_length3);
//     printf("Result 3: %d\n", result3); // Expected: 0

//     return 0;
// }