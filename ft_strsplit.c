#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
    char    **result;
    char const  *p;
    int        numSubstring;
    int        index;

	if (s == NULL)
		return (NULL);
	p = s;
    numSubstring = 0;
    index = 0;
    while (*p != '\0')
    {
        if (*p != c)
        {
            numSubstring++;
            while (*p != '\0' && *p != c)
                p++;
        }
        else
            p++;
    }
    if (!(result = (char **)malloc((numSubstring + 1) * sizeof(char*))))
        return (NULL);
    result[numSubstring] = '\0';
    p = s;
    while (*p != '\0')
    {
        if (*p != c)
        {
            char const *start = p;
            int k = 0;
            while (*p != '\0' && *p != c)
            {
                p++;
                k++;
            }
            result[index] = ft_strnew(k);
            ft_strncpy(result[index], start, k);
            index++;
        }
        else
            p++;
    }
    return (result);
}
