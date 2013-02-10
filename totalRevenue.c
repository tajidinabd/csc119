/*Topic 4 Assignment 2 Total
Derrick Williams
CSC119003
February 8 2013
Create a program that will multiply price and quantity to calculate 
the total revenue when user input amount by declaring variables and using "scanf" function
*/
#include <stdio.h> //Include the standard inputoutput header file

int main (void) //Declare the function will return integer value
{
// Local declarations that will be used later in the program
	int t_otal; //Word Separator: underscore variable type and identifier
	float p_rice; //Word Seperator: Capital variable type and identifier
	float sum; // Declare variable will intialize below variable type and identifier
	
//	Statements
	printf("This program will multiply\n"); // Displays what program will do 
	printf("Enter two numbers\n"); // How many numbers must be entered
	printf("In the form: nn nn <return>\n"); // Gives the format to input
	scanf("%d %f", &t_otal, &p_rice); //Intiallizes the two variables from above
	
	sum = t_otal * p_rice; // Number that will be multiplied together t_otal, P_rice
	
	printf("The total is: %f\n\n", sum); //Displays the calculated amonunt on the screen
	
	printf("Thank you.\n"); // Gives an ending greeting to user
	return 0; //returns a value to the OS upon completion
} // main
