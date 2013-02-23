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
	int i;
	srand((unsigned)time(NULL));
	i = (rand() % 10 + 1);
	
	
	