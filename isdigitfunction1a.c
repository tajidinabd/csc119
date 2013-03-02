#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char line[20];
	int len;
	int i;
	printf( "Enter a number: ");
	scanf("%s", line);
	len = strlen(line);
	for(i = 0; i < len; i++)
	{
		if(!isdigit(line[i]))
		{
			printf("%d is not a digit Please try again",i);
		}
	}
	return 0;
}
