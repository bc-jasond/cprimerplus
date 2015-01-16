#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

int main(int argc, char *argv[])
{
    char temp[MAX];
    char *ptr = temp;
    FILE *fp;
    int len = 0;
    int i = 0;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s character filename\n", argv[0]);
        exit(1);
    }
    if ((fp = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Can't open file %s.\n", argv[2]);
        exit(3);
    }
    while (fgets(ptr, MAX, fp) != NULL) {
        len = strlen(ptr);
        for (i = 0; i < len; i++) {
            if (ptr[i] == *argv[1]) {
                printf("%s", ptr);
                break;
            }
        }
    }
    return 0;
}

