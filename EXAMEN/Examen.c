#include <stdio.h>

int count_words(char *str)
{
    int i = 1;
    int p = 0;
    while(str[i] != '\0')
    {
        if (str[i] == 32 && str[i - 1] != 32)
            p++;
        i++;
    }
    if(i > 1 && str[i - 1] != 32)
        p++;
    return (p);
}

int main()
{
    printf("%d\n", count_words(""));
    return (0);
}