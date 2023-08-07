#include <unistd.h>

int main()
{
	int array[52] = {67, 84, 70, 108, 101, 97, 114, 110, 123, 75, 117, 114, 110, 48, 48, 108, 95, 68, 105, 115, 116, 114, 105, 99, 116, 125};
	int i = 0;
	while (array[i])
	{
		write(1, &array[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
}