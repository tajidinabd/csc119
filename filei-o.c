/* Assignment #10 File Input/Output with C
Derrick "Abu Bakr" Williams 
CSC119003
Jumada Al-Thani 22, 1434 AH  (May 3, 2013 CE)
This program will read the friends.dat file and output the file to the 
screen. Also will display a error message if the file is not read correctly.
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
	{	
		// Local Variables
		char fName[20];
		char lName[20];
		FILE *NameRead;
		
		// Statements
		NameRead = fopen("friends.dat", "r");
		
		if(NameRead == NULL)
		{
			puts("Error opening friends.dat file");
			exit(0);
		} // end of if
		else
			printf("\tName List\n");
			fscanf(NameRead, "%s%s", fName, lName);
			
		while (!feof(NameRead))
    {
        printf("%s %s\n", fName, lName);
        fscanf(NameRead, "%s%s", fName, lName);
    } // end of while
			
    return 0;
	return(EXIT_SUCCESS);
	} // end of main
