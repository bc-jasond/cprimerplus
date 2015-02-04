#include <stdio.h>
void print(float array[], int limit)
{
    int index;

    for (index = 0; index < limit; index++)
        printf("%4f\n", array[index]);
}
