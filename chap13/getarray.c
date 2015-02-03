#include <stdio.h>
#include "getint.h"
int getarray(int array[], int limit)
{
    int num, status;
    int index = 0;

    printf("This program stops reading numbers after %d values\nor if EOF is encountered.\n", limit);
    while (index < limit && (status = getint(&num)) != EOF)
    {
        if (status == YESNUM) {
            array[index++] = num;
            printf("The number %d has been accepted.\n", num);
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
