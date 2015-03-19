#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "list.h"
void showmovies(Item item);

int main(void)
{
    List movies;
    Item temp;
    char tstr[TSIZE];
    
    InitializeList(&movies);
    if (FullList(movies))
    {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(1);
    }
    puts("Enter first movie title:");
    while ((fgets(tstr, TSIZE-1, stdin) != NULL) && tstr[0] != '\n')
    {
        strncpy(temp.title, tstr, strlen(tstr)-1);
        puts("Enter your rating 0-10:");
        scanf("%d", &temp.rating);
        while(getchar() != '\n')
            continue;
        if (AddItem(temp, &movies) == False)
        {
            fprintf(stderr, "No memory available! Bye!\n");
            exit(1);
        }
        if (FullList(movies))
        {
            fprintf(stderr, "No memory available! Bye!\n");
            exit(1);
        }
        puts("Enter next movie title (empty line to stop):");
    }
    if (EmptyList(movies))
        printf("No data entered. ");
    else
    {
        printf("Here is the movie list:\n");
        Traverse(movies, showmovies);
    }
    printf("Bye!\n");
    return 0;
}

void showmovies(Item item)
{
    printf("Movie: %45s  Rating: %d\n", item.title, item.rating);
}
