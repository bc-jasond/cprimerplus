#include <stdio.h>
#include "getint.h"
int getint(int * ptint)
{
    int status;

    status = scanf("%d", ptint);
    if (status == NONUM)
        scanf("%*s");
    return status;
}
