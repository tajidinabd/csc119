/* Generate random numbers from 1 to 10 
Derrick Williams
Feb 23, 2013
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
// Local Declarations
int nrange;
	
// Statements	
	srand(time(NULL));
	nrange = (9 - 0) + 1;
	
	printf("%d",	rand() % nrange + 1);
	
	return 0;
} //Main
