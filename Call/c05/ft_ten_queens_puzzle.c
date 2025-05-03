#include <unistd.h>

int is_safe(int *pos, int col, int row)
{
    int i;
    i = 0;
    while (i < col)
    {
        if (pos[i] == row || (col - i) == (row > pos[i] ? row - pos[i] : pos[i] - row))
            return 0;
        i++;
    }
    return 1;
}

void print_solution(int *pos)
{
    char buf[11];
    int i;
    i = 0;
    while (i < 10)
    {
        buf[i] = '0' + pos[i];
        i++;
    }
    buf[10] = '\n';
    write(1, buf, 11);
}

void solve(int col, int *pos, int *count)
{
    int row;
    if (col == 10)
    {
        print_solution(pos);
        (*count)++;
        return;
    }
    row = 0;
    while (row < 10)
    {
        if (is_safe(pos, col, row))
        {
            pos[col] = row;
            solve(col + 1, pos, count);
        }
        row++;
    }
}

int ft_ten_queens_puzzle(void)
{
    int pos[10];
    int count;
    count = 0;
    solve(0, pos, &count);
    return count;
}
