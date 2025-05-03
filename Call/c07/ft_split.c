#include <stdlib.h>

int is_separator(char c, char *charset)
{
    int i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int word_count(char *str, char *charset)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (is_separator(*str, charset))
            in_word = 0;
        else
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        str++;
    }
    return (count);
}

int word_len(char *str, char *charset)
{
    int len = 0;
    while (str[len] && !is_separator(str[len], charset))
        len++;
    return (len);
}

char **ft_split(char *str, char *charset)
{
    int i = 0;
    int j;
    int len;
    char **result;

    result = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
    if (!result)
        return (NULL);
    
    while (*str)
    {
        if (!is_separator(*str, charset))
        {
            len = word_len(str, charset);
            result[i] = (char *)malloc(sizeof(char) * (len + 1));
            if (!result[i])
                return (NULL);
            j = 0;
            while (j < len)
            {
                result[i][j] = str[j];
                j++;
            }
            result[i][j] = '\0';
            i++;
            str += len;
        }
        else
            str++;
    }
    result[i] = NULL;
    return (result);
}
