#include <stdio.h>
void dub(int *, int size);
int main(void)
{
	static int junk[3][4] = {
		{2,3,5,8},
		{3,5,6,9},
		{12,10,8,6}
	};
	int i, j;

	for (i = 0; i < 3; i++)
		dub(junk[i], 4);
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%5d", junk[i][j]);
		putchar('\n');
	}
	return 0;
}

void dub(int * ar, int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		ar[i] *= 2;
}
