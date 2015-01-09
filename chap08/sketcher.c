#include <stdio.h>
#define TRUE 1
#define FALSE 2
#define MAXLENGTH 80
int badlimits(int begin, int end, int limit);
void display(char c, int first, int last);
int main(void)
{
	int ch;
	int start, stop;
	int badlimits();

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n' || ch == ' ' || ch == '\t')
			continue;
		if (scanf("%d %d", &start, &stop) != 2)
			break;
		if (badlimits(start, stop, MAXLENGTH) == TRUE)
			printf("Inappropriate limits were entered.\n");
		else
			display(ch, start, stop);
	}
	return 0;
}

int badlimits(int begin, int end, int limit)
{
	return (begin > end || begin < 1 || end > limit) ? TRUE : FALSE;
}

void display(char c, int first, int last)
{
	int column;

	for (column = 1; column < first; column++)
		putchar(' ');
	for (column = first; column <= last; column++)
		putchar(c);
	putchar('\n');
}
