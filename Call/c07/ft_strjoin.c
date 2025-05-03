#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int total_len = 0;
    int i, j, k;
    char *result;

    if (size == 0)
        return (malloc(1)); // Return empty string

    for (i = 0; i < size; i++)
        total_len += ft_strlen(strs[i]);

    total_len += (size - 1) * ft_strlen(sep) + 1; // For separator and null terminator
    result = (char *)malloc(sizeof(char) * total_len);
    if (!result)
        return (NULL);

    k = 0;
    for (i = 0; i < size; i++)
    {
        j = 0;
        while (strs[i][j])
        {
            result[k++] = strs[i][j++];
        }
        if (i < size - 1)
        {
            j = 0;
            while (sep[j])
            {
                result[k++] = sep[j++];
            }
        }
    }
    result[k] = '\0';
    return (result);
}
