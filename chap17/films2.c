#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45
struct film {
    char title[TSIZE];
    int rating;
    struct film * next;
};

int main(void)
{
    struct film * head = NULL;
    struct film * prev, * current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while (fgets(input, TSIZE-1, stdin) != NULL)
    {
        if (input[0] == '\n')
            break;
        current = (struct film *) malloc(sizeof(struct film));
        if (head == NULL)
            head = current;
        else
            prev->next = current;

        current->next = NULL;
        strncpy(current->title, input, strlen(input)-1);
        puts("Enter your rating from 0-10:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }
    if (head == NULL)
        printf("No data entered. ");
    else
        printf("Here is the movie list:\n");
    current = head;
    while (current != NULL)
    {
        printf("Movie: %s  Rating: %d\n", current->title, current->rating);
        current = current->next;
    }
    printf("Bye!\n");
    return 0;
}
