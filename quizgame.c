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
#include <conio.h>
//User Defined Function

int main(void)
{
//Local Declarations
int score = 0;
int asked = 0;
int input;
int answer;
	//Statements
	printf( "\t1. Math Teaser 1 \n" );
	printf( "\t2. Math Teaser 2 \n" );
	printf( "\t3. Math Teaser 3 \n" );
	printf( "\t4. Math Teaser 4 \n" );
    scanf( "%d", &input );
	
	if (isdigit(input)) {
		printf("\nYou must input a digit\n");
	} //if
	
	switch(input) {
	case 1:
		printf("\n50 multiplied by 3 is:  ");
		scanf("%d", &answer);
		
		if(answer == 150){
			printf("\nCorrect\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score+=3; // increments the variable by 3 if correct
		} //if
		else{
			printf("Wrong Answer\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score--; // decrements the variable by 1 if incorrect
		}
		break;
	
	case 2:
		printf("\n1000 divided by 2 is:   ");
		scanf("%d", &answer);
		
		if(answer == 500){
			printf("\nCorrect\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score+=3; // increments the variable by 3 if correct
		} //if
		else{
			printf("Wrong Answer\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score--; // decrements the variable by 1 if incorrect
		}
		break;
	
	case 3:
		printf("\n400 minus 67 is:  ");
		scanf("%d", &answer);
		
		if(answer == 333){
			printf("\nCorrect\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score+=3; // increments the variable by 3 if correct
		} //if
		else{
			printf("Wrong Answer\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score--; // decrements the variable by 1 if correct
		}
		break;
		
	case 4:
		printf("\n48 increased by 23 is:   ");
		scanf("%d", &answer);
		if(answer == 71){
			printf("\nCorrect\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score+=3; // increments the variable by 3 if correct
		} //if
		else{
			printf("Wrong Answer\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score--; // increments the variable by 3 if correct
		}
		break;
	
	default:            
		printf( "Bad input, quitting!\n" );
		break;
	}
	
	printf("\nYour Total Score is %d points out of %d question.", score, asked);
	
	return 0;
}
