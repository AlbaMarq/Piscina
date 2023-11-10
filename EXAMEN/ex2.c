#include <stdio.h>

int count_words(char *str)
{
    int i = 0;
    int p = 0;
    int first = 1;
    while(str[i] != '\0')
    {
        while (str[i] == 32 && str[i])
        {
            first = 1;
            i++;
        }
        while (str[i] != 32 && str[i] && first == 1)
        {
            first = 0;
            i++;
            p++;
        }
        while (str[i] != 32 && first == 0 && str[i])
            i++;     
    }
    return (p);
}

int main()
{
    printf("%d\n", count_words("  hola que   tal "));
    return (0);
}