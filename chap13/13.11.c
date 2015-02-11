#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define PER_ROW 3
#define ROWS 10
#define NAME_SIZE 34
#define INT_SIZE 5

int main(int argc, char *argv[])
{
    char holdem[ROWS][100];
    char sumstr[20];
    int row = 0;
    int sum;
    int c;
    int avg[ROWS];
    char *ptr;
    FILE *fp;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open file: %s!\n", argv[1]);
        exit(2);
    }
    while (row < ROWS && fgets(holdem[row], 100, fp) != NULL)
    {
        ptr = strchr(holdem[row], ':');
        c = 0;
        sum = 0;
        while (*ptr && c <= PER_ROW) {
            if (isdigit(*ptr)) {
                sum += (int) strtol(ptr, &ptr, 10);
                c++;
            } else {
                ptr++;
            }
        }

        *--ptr = ' ';

        avg[row] = sum/3;
        sprintf(sumstr, "AVG: %d\n", avg[row]);
        strcat(holdem[row], sumstr);
       
        row++;
    }

    int top, search, tmp;
    char temp[100];
    char *ptr2, *ptr3;

    for (top = 0; top < ROWS - 1; top++)
        for (search = top + 1; search < ROWS; search++)
            if (avg[search] < avg[top]) {
                tmp = avg[search];
                avg[search] = avg[top];
                avg[top] = tmp;
                
                ptr = holdem[search];
                ptr2 = temp;
                ptr3 = holdem[top];
                strcpy(ptr2, ptr);
                strcpy(ptr, ptr3);
                strcpy(ptr3, ptr2);
            }


    int width;
    for (row = 0; row < 10; row++) {
        ptr = strchr(holdem[row], ':');
        width = ptr - holdem[row];
        printf("%.*s", width, holdem[row]);
        printf("%.*s", NAME_SIZE-width-2, "                                            ");
        printf("%s", ptr);

    }
    return 0;
}

