#include <unistd.h>
#include "ft_stock_str.h"

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;

    while (par[i].str)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        char size_str[20];
        int size = par[i].size;
        int j = 0;

        if (size == 0)
        {
            size_str[j++] = '0';
        }
        else
        {
            while (size > 0)
            {
                size_str[j++] = (size % 10) + '0';
                size /= 10;
            }
            // Reverse the digits in size_str
            for (int k = 0; k < j / 2; k++)
            {
                char temp = size_str[k];
                size_str[k] = size_str[j - k - 1];
                size_str[j - k - 1] = temp;
            }
        }
        size_str[j] = '\0';
        ft_putstr(size_str);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}
