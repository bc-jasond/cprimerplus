#include <stdio.h>
#include <stdlib.h>
#define MAXTIT 40
#define MAXAUT 40
#define MAXBKS 5
#define FILENAME "book.dat"

struct book {
    char title[MAXTIT];
    char author[MAXAUT];
    float value;
};

int main(void)
{
    struct book libry[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen(FILENAME, "a+b")) == NULL) {
        fprintf(stderr, "Can't open file: %s\n", FILENAME);
        exit(1);
    }
    rewind(pbooks);
    while (count < MAXBKS && fread(&libry[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            printf("Current contents of %s:\n", FILENAME);
        printf("%s by %s: $%.2f\n", libry[count].title, libry[count].author, libry[count].value);
        count++;
    }
    filecount = count;
    if (count == MAXBKS) {
        fprintf(stderr, "The %s file is full.\n", FILENAME);
        exit(2);
    }

    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && fgets(libry[count].title, MAXTIT, stdin) != NULL && libry[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        fgets(libry[count].author, MAXAUT, stdin);
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
    fseek(pbooks, 0L, SEEK_END);
    fwrite(&libry[filecount], size, count - filecount, pbooks);
    fclose(pbooks);
    return 0;
}
