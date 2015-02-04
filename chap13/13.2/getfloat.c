#include <stdio.h>
#include "getfloat.h"
int getfloat(float * ptint)
{
    int status;

    status = scanf("%f", ptint);
    if (status == NONUM) {
        scanf("%*s");
        status = EOF;
    }
    return status;
}
