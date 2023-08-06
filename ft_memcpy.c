#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

// #include <stdio.h>
// int main() {
//     int source = 0x12345678;
//     int destination;

//     // Using byte-level access to copy the integer
//     ft_memcpy(&destination, &source, sizeof(int));

//     printf("Source integer: 0x%08X\n", source);
//     printf("Copied integer: 0x%08X\n", destination);

//     return 0;
// }