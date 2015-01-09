#include <stdio.h>
#define CHAR_LINE 8

int main(void)
{
    char ch;
    int r = 0;

    while ((ch = getchar()) != '#')
    {
	switch (ch)
	{
	    case '.':
		ch = '!';
		r++;
		break;
	    case '!':
		putchar('!');
		r++;
		break;
	}
	putchar(ch);
    }

    printf("\n%d substitutions\n", r);
    return 0;
}
                
