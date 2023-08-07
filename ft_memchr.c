#include <string.h>

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



// #include <stdio.h>
// #include <string.h>


// int main() {
//     // Test 1: Byte is found within the memory range
//     char test_string[] = "Hello, world!";
//     char byte_to_find = 'w';
//     size_t search_length = strlen(test_string);

//     void *result = ft_memchr(test_string, byte_to_find, search_length);
//     if (result != NULL) {
//         printf("Byte found at index: %ld\n", (char *)result - test_string);
//     } else {
//         printf("Byte not found\n");
//     }

//     // Test 2: Byte is not found within the memory range
//     char test_string2[] = "This is a test";
//     char byte_to_find2 = 'z';
//     size_t search_length2 = strlen(test_string2);

//     void *result2 = ft_memchr(test_string2, byte_to_find2, search_length2);
//     if (result2 != NULL) {
//         printf("Byte found at index: %ld\n", (char *)result2 - test_string2);
//     } else {
//         printf("Byte not found\n");
//     }

//     // Test 3: Search for a character not at the beginning of the string
//     char test_string3[] = "Hello, world!";
//     char byte_to_find3 = 'o';
//     size_t search_length3 = strlen(test_string3);

//     void *result3 = ft_memchr(test_string3, byte_to_find3, search_length3);
//     if (result3 != NULL) {
//         printf("Byte found at index: %ld\n", (char *)result3 - test_string3);
//     } else {
//         printf("Byte not found\n");
//     }

//     // Test 4: Search for a character in an empty string
//     char test_string4[] = "";
//     char byte_to_find4 = 'a';
//     size_t search_length4 = strlen(test_string4);

//     void *result4 = ft_memchr(test_string4, byte_to_find4, search_length4);
//     if (result4 != NULL) {
//         printf("Byte found at index: %ld\n", (char *)result4 - test_string4);
//     } else {
//         printf("Byte not found\n");
//     }

//     return 0;
// }