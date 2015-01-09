#include <stdio.h>
void pcopy(int *, int *, int n);
int main(void)
{
	static int orig[] = {108,22,3,55,22,17,147};
	int copy1[3];
	int i;

	pcopy(&orig[2], copy1, 3);

	for (i = 0; i < 3; i++)
	{
		printf("Original: %d, Copy 1: %d\n", orig[i], copy1[i]);
	}
	return 0;
}
void pcopy(int * o, int * c, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*c++ = *o++;
}
