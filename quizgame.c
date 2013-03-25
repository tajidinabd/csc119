/* Assignment # 7 Quiz Game
Derrick Williams 
CSC119003
Jumada Al-Awwal 9, 1434 AH  (March 21, 2013 CE)
This Quiz Game will give user choice of three categories to choose from 
also will notify user whether answer is correct or incorrect 
also at the end of the quiz give user total score for the Quiz.
*/
#include <stdio.h>
#include <ctype.h>
//User Defined Function
void playquiz(void)
{
	printf("\tTake the Quiz");
}

int main(void)
{
//Local Declarations
int score[0] = {0}; 
int asked[0] = {0};	
int input;
int answer;
	
	//Statements
	printf( "\t1. Play game!!\n" );
	printf( "\t2. Exit\n" );
	printf( "\tSelection: \n" );
    scanf( "%d", &input );
	
	if (isdigit(input)) {
		printf("\nYou must input a digit\n");
	} //if
	
	//Switch 
	switch (input) {
		case 1:            
		playgame();
		break;
		case 2:        
            printf( "Thanks for playing!\n" );
            break;
        default:            
            printf( "Bad input, quitting!\n" );
            break;
	} //switch
	getchar();
	
	
} //main