#include <stdio.h>
int main(void)
{
	int * ptr;
	static int fort[2][2] = { {12}, {14, 16} };
	ptr = fort[0];
	/////
	int digits[10];
	float rates[6];
	int mat[3][5];
	char (* pstr)[20];
	char * psa[20];

	printf("%d, %d\n", *ptr, *(ptr + 2));

	return 0;
}
