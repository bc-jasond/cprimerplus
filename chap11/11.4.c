#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *strch(char *ptr, char c);

int main(void)
{
    char *p = "hey that's a wrap!";
    char *start = p;
    char *r;
    char c = 'w';

    r = strch(p, c);

    printf("String searched:\n%s\nchar %c found here: %c at position: %ld\n", p, c, *r, r - start);

    return 0;

}	
char *strch(char *ptr, char c)
{
    while (*ptr++ != '\0')
        if (*ptr == c)
            return ptr;

    return NULL;
}
