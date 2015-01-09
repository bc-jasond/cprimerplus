#include <stdio.h>
void acopy(int [], int [], int n);
void pcopy(int *, int *, int n);
int main(void)
{
	static int orig[] = {3,55,22,17,147};
	int copy1[5];
	int copy2[5];
	int i;

	acopy(orig, copy1, 5);
	pcopy(orig, copy2, 5);

	for (i = 0; i < 5; i++)
	{
		printf("Original: %d, Copy 1: %d, Copy 2: %d\n", orig[i], copy1[i], *(copy2 + i));
	}
	return 0;
}
void acopy(int o[], int c[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		c[i] = o[i];
}
void pcopy(int * o, int * c, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*c++ = *o++;
}
