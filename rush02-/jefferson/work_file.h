#ifndef WORK_FILE_H
#define WORK_FILE_H

#include <unistd.h>

#define BUFFER_SIZE 1

typedef struct {
	unsigned __int128 number;
	char *number_text;
} s_numbers;

int count_lines(int fd);
char **create_matriz(int fd, int lines);
char **populate_matriz(int fd, char **matriz, int len_matriz);
unsigned __int128 char_number_to_int(char *num);
s_numbers *generate_struct(char **matriz, int len_matriz);
s_numbers *work_file(char *name_file);

#endif