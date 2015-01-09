#include <stdio.h>
#include <string.h>
#define WORDS "Please reconsider your last entry."
#define SIZE 40
int main(void)
{
	static char * orig = WORDS;
	static char copy[SIZE] = "reserved space";

	puts(orig);
	puts(copy);
	strcpy(copy, orig);
	puts(orig);
	puts(copy);
	return 0;
}
