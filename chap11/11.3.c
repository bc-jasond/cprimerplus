#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 80

void getnch(char *ptr, int n);

int main(void)
{
    char input[MAX];
    char *p;
    int k;

    p = input;
    getnch(p, MAX);

    puts(input);

    return 0;

}	
void getnch(char *ptr, int n)
{
    int ct = 0;
    while (ct++ < n && !isspace(*ptr++ = getchar()));
}
