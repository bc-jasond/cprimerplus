#include <stdio.h>
char * itobs(short, char *);
short invert_end(short num, short bits);
int main(void)
{
    char bin_str[8 * sizeof(short) + 1];
    short number;

    puts("Enter integers and see them in binary.");
    puts("Nonnumeric input terminates the program.");
    while (scanf("%hd", &number) == 1)
    {
        printf("%hd is %s\n", number, itobs(number, bin_str));
        printf("Inverting the last 8 bits gives: %hd\n%s\n", invert_end(number, 8), itobs(invert_end(number, 4), bin_str));
    }
    return 0;
}

char * itobs(short n, char * ps)
{
    short i;
    static short size = 8 * sizeof(short);

    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';
    return ps;
}
    
short invert_end(short num, short bits)
{
    short mask = 0;
    short bitval = 1;

    while (bits-- > 0)
    {
        mask |= bitval;
        bitval <<= 1;
    }
    return num ^ mask;
}

