#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
    FILE *orig, *copy;
    char buffer[BUF_SIZE];
    size_t bytes;

    if (argc < 3) {
        fprintf(stderr, "Usage: %s original-file copy-file\n", argv[0]);
        exit(1);
    }
    if (strcmp(argv[1], argv[2]) == 0) {
        fputs("Cannot copy a file to itself.\n", stderr);
        exit(2);
    }
    if ((orig = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open original-file: %s!\n", argv[1]);
        exit(3);
    }
    if ((copy = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Can't open copy-file: %s!\n", argv[2]);
        exit(4);
    }

    while ((bytes = fread(buffer, sizeof(char), BUF_SIZE, orig)) > 0)
        fwrite(buffer, sizeof(char), bytes, copy);

    if (ferror(orig) != 0)
        fprintf(stderr, "Error reading file %s\n", argv[1]);
    if (ferror(copy) != 0)
        fprintf(stderr, "Error writing file %s\n", argv[2]);

    fclose(orig);
    fclose(copy);
    return 0;
}
