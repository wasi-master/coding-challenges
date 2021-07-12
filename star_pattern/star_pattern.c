#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void repeat(unsigned int count, char *str, bool newline)
{
    if (newline)
    {
        while (count--)
            printf("%s", str);
        printf("%s", "\n");
    }
    else
    {
        while (count--)
            printf("%s", str);
    }
}

int main()
{
    int size = 15;
    int i = 0;
    int iterations = 0;
    while (1)
    {
        iterations++;
        if (iterations >= size)
            break;
        if (iterations <= (int)(size / 2))
        {
            i++;
            repeat(size - i, " ", false);
            repeat(i, "* ", true);
        }
        else
        {
            i--;
            repeat(size - i, " ", false);
            repeat(i, "* ", true);
        }
    }
    return 0;
}