#include <stdio.h>
#include <stdlib.h>
void show_end(char *, FILE *, int);
int main(int argc, char *argv[])
{
    FILE *fp;
    int file = 1;
    int num_lines = 1;
    char *ptr = argv[1];

    if (argc < 2) {
        printf("Usage: %s [-num_lines] file(s)\n", argv[0]);
        exit(1);
    }

    if (*ptr == '-') {
        if (sscanf(++ptr, "%d", &num_lines) != 1)
            num_lines = 1;
        file = 2;
    }
    
    for (; file < argc; file++)
    {
        if ((fp = fopen(argv[file], "r")) == NULL)
            fprintf(stderr, "%s can't open %s\n", argv[0], argv[file]);
        else {
            show_end(argv[file], fp, num_lines);
            fclose(fp);
        }
    }
    return 0;
}
void show_end(char *name, FILE *file, int num_lines)
{
    int ch;
    int newlines = 0;
    long count, start, last;

    printf("%s:\n", name);
    start = ftell(file);
    fseek(file, 0L, SEEK_END);
    last = ftell(file);
    for (count = 1L; count <= last; count++)
    {
        fseek(file, -count, SEEK_END);
        ch = getc(file);
        if (ch == '\n')
            newlines++;
        if (newlines == num_lines + 1) {
            start = ftell(file);
            break;
        }
    }
    fseek(file, start, SEEK_SET);
    while ((ch = getc(file)) != EOF)
        putchar(ch);
}

