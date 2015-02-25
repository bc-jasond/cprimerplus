#include <stdio.h>
#include <stdlib.h>
int rputs(const char *);
void show(int fp(const char * ps), char * str);
int main(int argc, char * argv[])
{
    if (argc < 2)
        exit(1);
    show(puts, argv[1]);
    show(rputs, argv[1]);
    return 0;
}

int rputs(const char * str)
{
    const char * start = str;

    while (*str != '\0')
        str++;
    while (str != start)
        putchar(*--str);
    return putchar('\n');
}

void show(int fp(const char * ps), char * str)
{
    fp(str);
}
