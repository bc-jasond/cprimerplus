#include <stdio.h>

int main(void)
{
	int ch;
	int count = 0;

	while ((ch = getchar()) != EOF) {
		for (int i = 0; i < 100000; i++);
		printf("\a");
		count++;
	}

	printf("%d", count);
}
