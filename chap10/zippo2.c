#include <stdio.h>
int main(void)
{
	int zippo[4][2];

	printf("zippo        = %p\n", zippo);
	printf("zippo[0]     = %p\n", zippo[0]);
	printf("&zippo[0][0] = %p\n", &zippo[0][0]);
	printf("*zippo       = %p\n", *zippo);

	printf("zippo + 1        = %p\n", zippo + 1);
	printf("zippo[0] + 1     = %p\n", zippo[0] + 1);
	printf("&zippo[0][0] + 1 = %p\n", &zippo[0][0] + 1);
	printf("*zippo + 1       = %p\n", *zippo + 1);
	printf("*(zippo + 1)     = %p\n", *(zippo + 1));

	return 0;
}
