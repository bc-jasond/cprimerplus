#include <stdio.h>
char *pr(char *str);
int main(int argc, char *argv[])
{
	char *str2;
	if (argc > 1)
		str2 = pr("");
	else
		printf("Usage: %s \"a string in quotes\"", argv[0]);

	return 0;
}

char *pr(char *str)
{
	char *pc;

	pc = str;
	while (*pc)
		putchar(*pc++);
	do {
		putchar(*--pc);
	} while (pc - str);

	return (pc);
}
