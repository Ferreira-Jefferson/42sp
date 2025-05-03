#ifndef ATOI_H
#define ATOI_H

int	is_number(char c);
int	is_space(char c);
int	is_signal(char c);
unsigned __int128	ft_atoi(char *str);
void print_int128(unsigned __int128 num);

#endif