#include <unistd.h>

/*
 * Função: ft_putchar
 * Descrição: Exibe um único caractere na saída padrão.
 */
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
 * Função: ft_swap
 * Descrição: Troca os valores de duas variáveis inteiras.
 */
void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * Função: ft_putstr
 * Descrição: Exibe uma string na saída padrão.
 */
void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

/*
 * Função: ft_strlen
 * Descrição: Retorna o tamanho de uma string.
 */
int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
    {
        len++;
    }
    return len;
}

/*
 * Função: ft_strcmp
 * Descrição: Compara duas strings e retorna:
 *  - 0 se as strings forem iguais,
 *  - Um valor negativo se a primeira for menor,
 *  - Um valor positivo se a primeira for maior.
 */
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}
