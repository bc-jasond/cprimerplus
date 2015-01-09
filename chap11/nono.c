#include <stdio.h>
int main(void)
{
	static c1 = 'A';
	static char dont[] = {'W','O','W','!','!'};
	static c2 = 'B';

	puts(dont);
	return 0;
}
