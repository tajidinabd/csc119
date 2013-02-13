/*Topic 4 Assignment 2 Name Input
Derrick Williams
CSC119003
February 8 2013
Create a program that will prompt user to input name using the "scanf" function
afterwards should receive a greeting
*/
#include <stdio.h> //Include the standard inputoutput header file

int main (void)  //Declare the function will return integer value
{
//Local Declarations
char fname[30];  //Intializes the variable variable type and identifier
char lname[30];  //Intializes the variable variable type and identifier

//Statements
	printf("Enter your first name:\n"); //Outputs to screen to prompt user
	scanf("%s", fname); //Reads user input data type is character
	
	printf("Enter your last name:\n"); //Outputs to screen to prompt user
	scanf("%s", lname); //Reads user input data type is character
	
	printf("Guten Tag %s %s\n", fname, lname); //Displays user input
	getchar(); //Keeps window open
	
	return 0; //returns a value to the OS upon completion
	
}	// main
