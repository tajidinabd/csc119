#include <stdio.h>

int main (void)
{
	int loopCount;

	loopCount = 1;
	printf("and the increment: ");
	while (loopCount <= 100)
		printf ("%4d", loopCount += 5);
	printf("\n\n");
		return 0;
}
