#include <stdio.h>
#define CHAR_LINE 8

int main(void)
{
    char ch;
    int chr_cnt = 0;

    while ((ch = getchar()) != '#')
    {
	++chr_cnt;
	printf("char: %c, code: %d ", ch, ch);
	if (chr_cnt % CHAR_LINE == 0) {
	    putchar('\n');
	}
    }
    putchar('\n');    
    return 0;
}
                
