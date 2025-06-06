#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void ft_swap(char **s1, char **s2)
{
    char *temp;

    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) > 0)
                ft_swap(&argv[i], &argv[j]);
            j++;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        write(1, argv[i], ft_strcmp(argv[i], argv[i]));
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
