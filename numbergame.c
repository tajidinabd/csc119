/* Topic 5 Assignment 3 Number Game
Derrick Williams
CSC119003
This game will store a random number each time it starts between 1 and 10 and give the user 3 chances
to pick the correct number otherwise the game will end and tell user to try again. 
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int nrange;
	int R_Eply = 0;
	char cAnswer = '\0';
	
	srand(time(NULL));
	nrange = (rand() % 10) + 1;

	printf("\nChoose a number between 1 and 10: ");
	scanf("%d", &R_Eply);
{
	if (R_Eply == nrange)
		printf("\nYou responded correctly\n");
	printf("%d",	rand() % nrange + 1);
	
	return 0;
} //Main
