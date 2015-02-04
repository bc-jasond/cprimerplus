#include <stdio.h>
#include "getfloat.h"
int getarray(float array[], int limit)
{
    float num;
    int status;
    int index = 0;

    printf("This program stops reading floating point numbers after %d values\nor if EOF is encountered.\n", limit);
    while (index < limit && (status = getfloat(&num)) != EOF)
    {
        if (status == YESNUM) {
            array[index++] = num;
            printf("The number %f has been accepted.\n", num);
        }
        else if (status == NONUM)
            printf("That was no integer! Try again.\n");
        else
            printf("This can't happen! Something's very wrong.\n");
    }
    if (index == limit)
        printf("All %d elements of the array were filled.\n", limit);
    
    return (index);
}
