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
char myName[35];  //Intializes the variable variable type and identifier

//Statements
	printf("Enter your name: "); //Outputs to screen to prompt user
	scanf("%s",myName); //Reads user input data type is character
	printf("Hello %s\n",myName); //Displays user input

	return 0; //returns a value to the OS upon completion
	
}	// main
