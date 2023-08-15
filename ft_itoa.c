#include "libft.h"

void	recursion_ft(char *result, int tmp_n)
{
	if (tmp_n == -2147483648)
	{
		ft_strcpy(result, "-2147483648");
	}
	else
	{
		if (tmp_n < 0)
		{
			*result = '-';
			tmp_n *= -1;
		}
		if (tmp_n >= 10)
		{
			recursion_ft(result, tmp_n / 10);
			recursion_ft(result, tmp_n % 10);
		}
		else
		{
			while (*result)
				result++;
			*result = tmp_n + '0';
		}
	}
}

char	*ft_itoa(int n)
{
	int	tmp_n;
	int	degit_len;
	char	*result;

	tmp_n = n;
	degit_len = 0;
	if (tmp_n == 0 || tmp_n < 0)
		degit_len = 1;
	while (tmp_n != 0)
	{
		tmp_n /= 10;
		degit_len++;
	}
	tmp_n = n;
	if (!(result = (char *)ft_strnew(degit_len)))
		return (NULL);
	recursion_ft(result, tmp_n);
	return (result);
}