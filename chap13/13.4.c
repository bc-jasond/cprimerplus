#include <stdio.h>

int callme(void);

int main(void)
{
    for (int i = 0; i < 100; i++)
        callme();
    printf("I was called %d times.\n", callme());
    return 0;
}
int callme(void)
{
    static int times;
    return ++times;
}
