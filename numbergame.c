/* Topic 5 Assignment 3 Number Game
Derrick Williams
CSC119003
Rabi Al-Ahkhar 19, 1434 AH  (March 1, 2013 CE)
This game will store a random number each time it starts between 1 and 10 and give the user 1 chance
to pick the correct number otherwise the game will end and display the correct number
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
// Local Declarations
	int nrange;
	char R_eply;
	
// Statements
	srand(time(NULL));
	nrange = (rand() % 10) + 1;

	printf("\nChoose a number between 1 and 10: ");
	scanf("%c", &R_eply);
		if (!isdigit(R_eply))  {
			printf("\nYou must input a digit\n");
	return 0;
		}
		if ( (R_eply - '0') == nrange) {
			printf("\nYou responded correctly\n");
			}
		else {
		printf("\nSorry you guessed wrong\n");
		printf("\nThe correct guess was %d\n", nrange);
   
	
	}
	return 0;
} //main
