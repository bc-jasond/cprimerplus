#include <stdio.h>
int max(int *, int);
int main(void)
{
	static int barry[] = {108,33,12,15,75,8};
	printf("The biggest number was: %d\n", max(barry, 6));
	return 0;
}
int max(int * b, int n)
{
	int biggest = 0;
	for (int i = 0; i < n; i++, b++)
		if (*b > biggest)
			biggest = *b;
	return biggest;
}
