#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *file1, *file2;
    int ch,
        count,
        line_num = 1;

    if (argc < 3) {
        fprintf(stderr, "Usage: %s file1 file2\n", argv[0]);
        exit(1);
    }
    if ((file1 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open file1: %s!\n", argv[1]);
        exit(2);
    }
    if ((file2 = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Can't open file2: %s!\n", argv[2]);
        exit(3);
    }

    while (!(feof(file1) && feof(file2)));  
    {
        count = 0;
        printf("%d: ", line_num++);
        while ((ch = getc(file1)) != EOF && ch != '\n')
        {
            putc(ch, stdout);
            count = 1;
        }

        if (count)
            putchar(' ');

        count = 0;
        while ((ch = getc(file2)) != EOF && ch != '\n')
        {
            count = 1;
            putc(ch, stdout);
        }

        if (count)
            putchar('\n');
    } 

    if (ferror(file1) != 0)
        fprintf(stderr, "Error reading file %s\n", argv[1]);
    if (ferror(file2) != 0)
        fprintf(stderr, "Error writing file %s\n", argv[2]);

    fclose(file1);
    fclose(file2);
    return 0;
}
