#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    size = max - min;
    *range = (int *)malloc(sizeof(int) * size);
    if (!*range)
        return (-1);

    i = 0;
    while (min < max)
    {
        (*range)[i] = min;
        i++;
        min++;
    }

    return (size);
}
