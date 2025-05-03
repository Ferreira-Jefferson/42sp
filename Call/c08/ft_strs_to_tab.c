#include <stdlib.h>
#include "ft_stock_str.h"

char *ft_strdup(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    char *copy = (char *)malloc(sizeof(char) * (i + 1));
    if (!copy)
        return NULL;
    for (int j = 0; j < i; j++)
        copy[j] = src[j];
    copy[i] = '\0';
    return copy;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    struct s_stock_str *tab;
    int i;

    tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
    if (!tab)
        return NULL;

    for (i = 0; i < ac; i++)
    {
        tab[i].size = 0;
        while (av[i][tab[i].size])
            tab[i].size++;
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        if (!tab[i].copy)
        {
            free(tab);
            return NULL;
        }
    }
    tab[i].str = 0;  // Mark the end of the array
    return tab;
}
