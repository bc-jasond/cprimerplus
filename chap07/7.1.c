#include <stdio.h>

int main(void)
{
    char ch;
    int s_ct = 0;
    int nl_ct = 0;
    int o_ct = 0;

    while ((ch = getchar()) != '#')
    {
	switch (ch)
	{
	    case ' ':
                s_ct++;
                break;
            case '\n':
                nl_ct++;
                break;
            default:
                o_ct++;
        }
    }
    
    printf("%d spaces, %d newlines, %d other chars read.\n", s_ct, nl_ct, o_ct);
    return 0;
}
                
