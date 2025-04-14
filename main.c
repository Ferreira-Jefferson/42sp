#include <stdlib.h>
#include <unistd.h>

#include "c_00/ex01/ft_print_alphabet.c"
#include "c_00/ex02/ft_print_reverse_alphabet.c"
#include "c_00/ex03/ft_print_numbers.c"
#include "c_00/ex04/ft_is_negative.c"
 
int main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);

	ft_print_reverse_alphabet();
    	write(1, "\n", 1);

	ft_print_numbers();
	write(1, "\n", 1);

	ft_is_negative(-1);
        write(1, "\n", 1);

        ft_is_negative(0);
        write(1, "\n", 1);

        ft_is_negative(1);
        write(1, "\n", 1);


	return (EXIT_SUCCESS);
}
