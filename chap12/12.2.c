#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, count;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s file1 file2 file3...\n", argv[0]);
        exit(1);
    }
    for (count = 1; count <= argc; count++) {
        if ((fp = fopen(argv[1], "r")) == NULL) {
            fprintf(stderr, "Can't open original-file: %s!\n", argv[1]);
            continue;
        }
        while ((ch = getc(fp)) != EOF)
            putc(ch, stdout);
        fclose(fp);
    }

    return 0;
}
