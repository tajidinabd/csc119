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
void printResults()

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
	return 0;
	} //main
	
	//Switch 
	switch (input) {
		case 1:            
		playgame()
		{
			
		}
		break;
		case 2:        
            printf( "Thanks for playing!\n" );
            break;
        default:            
            printf( "Bad input, quitting!\n" );
            break;
	} //switch
	getchar();
	
/*======================= Print Results ===============================
Prints the final results for the quiz how many correct out of the number of questions
	Pre	 keeps running score of the score and asked variables
	Post displays the results
*/
void printResults()
{
	printf("\nYour Total Score is %d points out of %d questions.", score, asked);
	return;
} //printResults
	