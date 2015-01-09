#include <stdio.h>
#include <string.h>
#define NAME "MEGATHINK, INC."
#define ADDRESS "10 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define LIMIT 65
#define SPACE ' '
void n_char(char ch, int num);

int main(void)
{
	int spaces;

	n_char('*', LIMIT);
	putchar('\n');

	n_char(SPACE, (LIMIT - strlen(NAME)) / 2);
	printf("%s\n", NAME);
	
	spaces = (LIMIT - strlen(ADDRESS)) / 2;
	n_char(SPACE, spaces);
	printf("%s\n", ADDRESS);

	n_char(SPACE, (LIMIT - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	n_char('*', LIMIT);
	putchar('\n');	
	return 0;
}

void n_char(char ch, int num)
{
	for (int i = 0; i <= num; i++)
		putchar(ch);
}
