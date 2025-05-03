#include <stdlib.h>
#include <stdio.h>

#include "strings.h"
#include "work_file.h"
#include "atoi.h"

#include <stdio.h>
int	main(int argc, char *argv[])
{
	s_numbers *numbers_dict = work_file("my_numbers.dict");
	printf("Valor: ");
    print_int128(numbers_dict[34].number);
    printf("\n");
	printf("Text: %s\n\n", numbers_dict[34].number_text);
	return (0);
}