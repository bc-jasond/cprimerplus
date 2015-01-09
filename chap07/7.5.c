#include <stdio.h>
#define CHAR_LINE 8

int main(void)
{
    char ch, prev;
    int r = 0;

    while ((ch = getchar()) != '#')
    {
	if (prev == 'e') {
	    if (ch == 'i') {
		r++;
	    }
        }

    	prev = ch;
    }

    printf("\n ei occured %d times\n", r);
    return 0;
}
                
