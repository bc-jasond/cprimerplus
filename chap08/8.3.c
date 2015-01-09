#include <stdio.h>

int main(void)
{
	int ch;
	int count = 0;

	while ((ch = getchar()) != EOF) {
		if (ch < ' ')
		{			
			if (ch == '\n')
				printf("\\n,%d\n", ch);
			else if (ch == '\t')
				printf("\\t,");
			else
				printf("^%c,", ch + 64);
			printf("%d ", ch);
		}
		else
			printf("%c,%d ", ch, ch);
		if (++count % 10 == 0)
			printf("\n");
	}
}
