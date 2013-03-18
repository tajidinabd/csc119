/* Assignment # 6 Arithmetic Quiz
Derrick Williams (Abu Bakr)
CSC119003
Jumada Al-Awwal 5, 1434 AH  (March 17, 2013 CE)
This program will test the users knowledge of 5 arithmetic questions.
Will tell user whether answer is correct or incorrect.
Will give a score at the end of the quiz
*/
#include <stdio.h>

int main(void)
{
//Local Declarations
int score = 0;
int asked = 0;
int answer;
//Statements
	printf("\t\t===NumberQuiz===");
	printf("\n\n\tThe quiz has 5 very basic athrmetic problems.\n\tYou get 3 points \n\tfor each correct answer and are deducted 1 point for each wrong answer.\n");

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
			asked++;
			score+=3;
		} //if
		else{
			printf("Wrong Answer\n");
			asked++;
			score--;
		}

    printf("\n400 minus 67 is:  ");
    scanf("%d", &answer);

		if(answer == 333){
			printf("\nCorrect\n");
			asked++;
			score+=3;
		} //if
		else{
			printf("Wrong Answer\n");
			asked++;
			score--;
		}

	printf("\n48 increased by 23 is:   ");
	scanf("%d", &answer);

		if(answer == 71){
			printf("\nCorrect\n");
			asked++;
			score+=3;
		} //if
		else{
			printf("Wrong Answer\n");
			asked++;
			score--;
		}

    printf("\n14 multiplied by 13 is:  ");
    scanf("%d", &answer);

		if(answer == 182){
			printf("Correct\n");
			asked++;
			score+=3;
		} //if
		else{
			printf("Wrong Answer\n");
			asked++;
			score--;
		}

    printf("\nYour Total Score is %d points out of %d questions.", score, asked);

    return 0; 

} //main
