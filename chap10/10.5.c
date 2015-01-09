#include <stdio.h>
int difference(int *, int);
int main(void)
{
	static int barry[] = {108,33,12,15,75,8,210};
	printf("The difference between the biggest and smallest numbers is: %d\n", difference(barry, 7));
	return 0;
}
int difference(int * b, int n)
{
	int smallest = *b;
	int biggest = *b;
	for (int i = 0; i < n; i++, b++) {
		if (*b > biggest) {
			biggest = *b;
		} else if (*b < smallest) {
			smallest = *b;
		}
	}
	return biggest - smallest;
}
