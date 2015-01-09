#include <stdio.h>
void to_binary(long);
int main(void)
{
	long number;
	
	while (scanf("%lu", &number) == 1)
	{
		to_binary(number);
		putchar('\n');
	}
	return 0;
}

void to_binary(long n)
{
	long r;
	
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar('0' + r);
	return;
}
