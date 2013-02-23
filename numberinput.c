/* This programs checks whether the input is a number or not with isdigit function
Derrick Williams
Feb 23 2013
*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main (void)
{
	char di;
	printf("Enter a character : ");
	di = getchar();
	if(isdigit(di))
		printf("%c is a digit!", di);
	else
		printf("%c is not a digit!", di);
	getch();
	return 0;
}
