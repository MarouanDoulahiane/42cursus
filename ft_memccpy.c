#include "libft.h"


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return ((void *)(d + i + 1));
		i++;
	}
	return (NULL);
}


// #include <stdio.h>
// #include <string.h>

// // Your ft_memccpy function goes here (from the previous implementation)

// int main() {
//     char source[] = "Hello, World!";
//     char destination1[20] = "";
//     char destination2[20] = "";

//     size_t n = strlen(source);
//     int c = 'W';

//     // Using ft_memccpy
//     void* result1 = ft_memccpy(destination1, source, c, n);

//     // Using memccpy
//     void* result2 = memccpy(destination2, source, c, n);

//     if (result1 != NULL && result2 != NULL) {
//         size_t stop_position1 = (size_t)((char*)result1 - destination1);
//         size_t stop_position2 = (size_t)((char*)result2 - destination2);

//         // Compare the outputs and stop positions
//         if (strcmp(destination1, destination2) == 0 && stop_position1 == stop_position2) {
//             printf("Both functions copied the same data and stopped at the same position:\n");
//             printf("Result from ft_memccpy: %s\n", destination1);
//             printf("Result from memccpy: %s\n", destination2);
//         } else {
//             printf("The functions produced different outputs or stopped at different positions:\n");
//             printf("Result from ft_memccpy: %s\n", destination1);
//             printf("Result from memccpy: %s\n", destination2);
//         }
//     } else if (result1 == NULL && result2 == NULL) {
//         printf("Both functions did not encounter the specified byte and returned NULL.\n");
//     } else {
//         printf("The functions produced different results regarding NULL return value:\n");
//         printf("Result from ft_memccpy: %p\n", result1);
//         printf("Result from memccpy: %p\n", result2);
//     }

//     return 0;
// }
