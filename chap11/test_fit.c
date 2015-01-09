#include <stdio.h>
#include <string.h>
void fit(char *, int);
int main(void)
{
	static char mesg[] = "Hold on to your hats, hackers.";

	puts(mesg);
	fit(mesg, 7);
	puts(mesg);
	return 0;
}
void fit(char *str, int size)
{
	if (strlen(str) > size)
		*(str + size) = '\0';
}
