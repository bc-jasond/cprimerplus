#include <stdio.h>
void print(int array[], int limit)
{
    int index;

    for (index = 0; index < limit; index++) {
        if (index > 0 && index % 6 == 0)
            printf("\n");
        printf(" %d", array[index]);
    }
}
