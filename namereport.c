/* Assignment #9 Print Names Report
Derrick "Abu Bakr" Williams 
CSC119003
Jumada Al-Thani 2, 1434 AH  (April 13, 2013 CE)
This program will have user input up to 5 names in a 2d Character Array
after each name user will have menu option to enter a new name
or print the names 
*/
#include <stdio.h>


int main(void)
{
	// Local Variables
	int x = 0;
	int y = 0;
	int namePick;
	char nameTable[5][30];
		
	// Statements
    printf("\tWelcome to the Name Report Program.\n");
	printf("\tEnter up to 5 names press <Enter> to Continue: \n");
    getchar();
	for(x = 0;x < 5; x++)
	{
    printf("Enter name %d:", x+1);
    scanf("%s", nameTable[x]);
	
		printf("\tTo enter another name press 1 or to view report press 2\n");
		printf("1)\tAdd Another Name\n");
		printf("2)\tView Name Report\n");
		scanf("%d", &namePick);
	switch(namePick)
	{
		case 1:
		break;
		case 2:
		for(y = 0;y <= x; y++)
		{
		printf("\nName %d is %s\n",y+1, nameTable[y]);
		
	} // nested for loop
	} // switch
} // for
   return 0;  

} // end of main
