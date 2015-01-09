#include <stdio.h>
void pcopy(int *, int *, int n);
int main(void)
{
	static int orig[][55555] = {
		{3,55,22,17,147},
		{14,52,39,1,35},
		{23,45,88,19,12}
	};
	int copy1[3][5];
	int i;

	for (i = 0; i < 3; i++)
		pcopy(orig[i], copy1[i], 5);

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++)
			printf("%4d%4d", orig[i][j], copy1[i][j]);
		putchar('\n');
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
