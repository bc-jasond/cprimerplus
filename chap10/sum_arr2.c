#include <stdio.h>
#define SIZE 10
//long sump(int *ar, int n);
int main(void)
{
	int m = 10, *n;
	n = &m;
	printf("n = %d at address %p\n", *n, n);
	n++;
	printf("n = %d at address %p\n", *n, n);
	return 0;
}
