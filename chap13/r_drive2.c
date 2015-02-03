#include <stdio.h>
extern void srand1(unsigned int x);
extern int rand1(void);
int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    scanf("%u", &seed);
    srand1(seed);
    for (count = 0; count < 5; count++)
        printf("%d\n", rand1());
    return 0;
}
