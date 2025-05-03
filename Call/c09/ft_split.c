#include <stdlib.h>

// Função auxiliar para verificar se um caractere pertence ao charset
static int is_separator(char c, char *charset)
{
    while (*charset)
    {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

// Função para contar o número de palavras (substrings) na string
static int count_words(char *str, char *charset)
{
    int count = 0;
    while (*str)
    {
        // Pula os separadores
        while (*str && is_separator(*str, charset))
            str++;
        // Se não é um separador, encontramos uma palavra
        if (*str)
        {
            count++;
            // Pula os caracteres até encontrar outro separador
            while (*str && !is_separator(*str, charset))
                str++;
        }
    }
    return count;
}

// Função principal que divide a string
char **ft_split(char *str, char *charset)
{
    int i = 0;
    int word_count = count_words(str, charset);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1)); // +1 para o NULL no final
    if (!result)
        return NULL;

    while (*str)
    {
        // Pula os separadores
        while (*str && is_separator(*str, charset))
            str++;

        if (*str)
        {
            char *start = str;
            // Encontra o final da palavra
            while (*str && !is_separator(*str, charset))
                str++;

            // Aloca memória para a palavra e copia
            int len = str - start;
            result[i] = (char *)malloc(len + 1); // +1 para o '\0'
            if (!result[i])
            {
                // Em caso de erro, libera o que foi alocado até agora
                while (i > 0)
                    free(result[--i]);
                free(result);
                return NULL;
            }

            // Copia a palavra
            for (int j = 0; j < len; j++)
                result[i][j] = start[j];
            result[i][len] = '\0'; // Adiciona o caractere nulo no final
            i++;
        }
    }

    result[i] = NULL; // Marca o final da array com NULL
    return result;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    char **result = ft_split("Hello World, how are you?", " ,?");
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
}
