#include <stdio.h>
int main(void)
{
    int size;
    unsigned long toobig = 0;

    size = sizeof toobig;

    printf("Your weight in gold is worth $%d.\n", size);
    printf("Your weight in gold is worth $%lu.\n", toobig - 1);

18446,744,073,709,551,615

    return 0;
}