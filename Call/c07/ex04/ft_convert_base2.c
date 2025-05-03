#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

int is_valid_base(char *base)
{
    int i, j;

    if (ft_strlen(base) < 2)
        return (0);
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int ft_atoi_base(char *nbr, char *base)
{
    int result = 0;
    int base_len = ft_strlen(base);
    int sign = 1;
    int i = 0;

    while (nbr[i] == ' ' || nbr[i] == '\t' || nbr[i] == '\n' || nbr[i] == '\r' || nbr[i] == '\v' || nbr[i] == '\f')
        i++;
    if (nbr[i] == '-' || nbr[i] == '+')
    {
        if (nbr[i] == '-')
            sign = -1;
        i++;
    }
    while (nbr[i])
    {
        int j = 0;
        while (base[j] && base[j] != nbr[i])
            j++;
        if (base[j] == '\0')
            break;
        result = result * base_len + j;
        i++;
    }
    return (result * sign);
}

char *ft_itoa_base(int nbr, char *base)
{
    int base_len = ft_strlen(base);
    int temp = nbr;
    int len = 1;
    char *result;
    
    if (nbr < 0)
        temp = -nbr;
    while (temp >= base_len)
    {
        temp /= base_len;
        len++;
    }
    if (nbr < 0)
        len++;
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (nbr == 0)
        result[0] = base[0];
    temp = (nbr < 0) ? -nbr : nbr;
    while (temp > 0)
    {
        result[--len] = base[temp % base_len];
        temp /= base_len;
    }
    if (nbr < 0)
        result[0] = '-';
    return (result);
}
