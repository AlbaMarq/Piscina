#include <unistd.h>
#include <stdlib.h>

int input_validation(char *str);
int board();

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (input_validation(argv[1]))
            return (0);
        board();
    }
    else
        write(1, "Error, more than 1 argument", 27);
    return (0);
}