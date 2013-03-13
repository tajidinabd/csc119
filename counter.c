/* Assignment # 5 Number Counter
Derrick Williams (Abu Bakr)
CSC119003
Jumada Al-Awwal 1, 1434 AH  (March 13, 2013 CE)
This program will count from 1 to 101 in increments of 5 using for loop
 */ 
#include <stdio.h>
int main (void)
{
// Statements
	for(int i = 1; i <= 101; i+=5) {
		printf ("\t%d\n", i);
	}
	return 0;
} //main
