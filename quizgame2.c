/* Assignment # 7 Quiz Game
Derrick Williams 
CSC119003
Jumada Al-Awwal 17, 1434 AH  (March 29, 2013 CE)
This Quiz Game will give user choice of two categories to choose from 
Also will notify user whether answer is correct or incorrect 
also at the end of the quiz give user total score for the Quiz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
//User Defined Function
void quiz(void);
void menu(void);

int main(void)
{
	// Statements
    printf("\tWelcome to the Quiz.\n");
    printf("\tPress any key to continue\n");
    getchar();
    menu();

    return 0;

} //main
/* Menu function

*/
void menu(void)
{
	int pickMenu;
	
	do
	{
		printf( "\tQuiz Menu\n" );
		printf("\t1) Quiz\n");
		printf("\t2) Exit\n");
		scanf("%d", &pickMenu);
		
// Switch		
		switch(pickMenu)
		{
			case 1: quiz();
				break;
			case 2: printf("Exiting Program\n");
				exit(0);
				break;
			default: printf("Wrong choice\n");
				break;
		} // switch
	} while (pickMenu != 2);
} // menu function

void quiz(void)
{
	int score = 0;
	int asked = 0;
	int answer;
	
		printf("\n\n\tThe quiz has 5 very basic arithmetic problems.\n\tYou get 3 points \n\tfor each correct answer and are deducted 1 point for each wrong answer.\n");
	
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
			score--; // decrements the variable by 1 if incorrect
			}
	
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
			score--; // decrements the variable by 1 if incorrect
			}
	
			printf("\n14 multiplied by 13 is:  ");
			scanf("%d", &answer);
	
			if(answer == 182){
			printf("Correct\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score+=3; // increments the variable by 3 if correct
			} //if
			else{
			printf("Wrong Answer\n");
			asked++; // increments the variable by 1 this keeps track of questions asked
			score--; // decrements the variable by 1 if incorrect
			}
			
	printf("\nYour Total Score is %d points out of %d question.", score, asked);
			exit(1);
} // quiz function
