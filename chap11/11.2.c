#include <stdio.h>
#include <ctype.h>
#define MAX 20


void getnch(char *ptr, int n);

int main(void)
{
    char input[MAX];
    char *p;
    int k;
    int n = 10;

    p = input;
    getnch(p, n);

    for (k = 0; k < n; k++)
        putchar(input[k]);

    return 0;

}	
void getnch(char *ptr, int n)
{
    int ct = 0;
    while (ct++ < n && !isspace(*ptr++ = getchar()));
}
