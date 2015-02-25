#include <stdio.h>
#define MAXTIT 40
#define MAXAUT 40
#define MAXBKS 10

struct book {
    char title[MAXTIT];
    char author[MAXAUT];
    float value;
};

int main(void)
{
    struct book libry[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && gets(libry[count].title) != NULL && libry[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        gets(libry[count].author);
        printf("Now enter the value.\n");
        scanf("%f", &libry[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    printf("Here is the list of your books:\n");
    for (index = 0; index < count; index++)
        printf("%s by %s: $%.2f\n", libry[index].title, libry[index].author, libry[index].value);
    return 0;
}
