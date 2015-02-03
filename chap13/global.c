#include <stdio.h>
int Units;
void critic(void);
int main(void)
{
    extern int Units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &Units);
    while (Units != 56)
        critic();
    printf("You must have looked it up!\n");
    return 0;
}
void critic(void)
{
    extern int Units;

    printf("No luck, chummy. Try again.\n");
    scanf("%d", &Units);
}
