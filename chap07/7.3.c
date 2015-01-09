#include <stdio.h>
#define CHAR_LINE 8

int main(void)
{
    char ch;
    int r = 0;

    while ((ch = getchar()) != '#')
    {
	if (ch == '.') {
	    ch = '!';
	    r++;
	} 
	else if (ch == '!') {
   	    putchar('!');
	    r++;
	}
	putchar(ch);
    }

    printf("\n%d substitutions\n", r);
    return 0;
}
                
