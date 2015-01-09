#include <stdio.h>
int max(int *, int);
int main(void)
{
	static int barry[] = {108,33,12,15,75,8,210};
	printf("The biggest number was at index: %d\n", max(barry, 7));
	return 0;
}
int max(int * b, int n)
{
	int index = 0;
	int biggest = 0;
	for (int i = 0; i < n; i++, b++) {
		if (*b > biggest) {
			biggest = *b;
			index = i;
		}
	}
	return index;
}
