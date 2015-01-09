#include <stdio.h>

int main(void)
{
	int secs = 5;

	for (; secs > 0; secs--)
		printf("%d seconds!\n", secs);

	printf("We have ignition!\n");
	return 0;
}
