#include <stdlib.h>
#include <unistd.h>

#include "c_00/ex00/ft_putchar.c"

int main(void)
{
    ft_putchar('J');
    write(1, "\n", 1);
    return (EXIT_SUCCESS);
}