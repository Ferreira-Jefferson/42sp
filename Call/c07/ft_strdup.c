#include <stdlib.h>

char *ft_strdup(char *src)
{
    int len;
    char *dest;
    int i;

    len = 0;
    while (src[len])
        len++;
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
