#include <stdio.h>
#include <time.h>
extern void srand1(unsigned);
extern int rollem(int);
int main(void)
{
    int dice, count, roll, c;
    short seed;
    int sides;

    printf("Enter a seed value or C to use the system clock.\n");
    if (scanf("%hd", &seed) != 1) {
        seed = (short) clock();
        printf("Using %d as a seed...\n", seed);
    }
    
    while((c = getchar()) != '\n' && c != EOF);
    
    srand1(seed);
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("How many dice?\n");
        scanf("%d", &dice);
        for (roll = 0, count = 0; count < dice; count++)
            roll += rollem(sides);
        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }
    printf("GOOD FORTUNE TO YOU!\n");
    return 0;
}
