/* Assignment # 6 Arthmetic Quiz
Derrick Williams (Abu Bakr)
CSC119003
Jumada Al-Awwal 1, 1434 AH  (March 13, 2013 CE
This program will test the users knowledge of 5 arthmetic questions.
Will generate random questions for the user to answer
Will tell user whether answer is correct or incorrect.
Will keep track of number of correct and incorrect questions. 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
// Local Declarations
	int wrong_Question; 
	int correct_Question; 
	int asked_Question;
	int answer_Question;
	int random_Question;  
	int total_Question;
	
// Statements	
	printf("\t\t===NumberQuiz===");
	printf("\n\nEnter a number between 1-5 for the number of Questions");
	scanf("%d", &total_Question);
	printf("\nYou will have %d questions for this quiz.", total_Question);
	
	srand(time(NULL)); // will use system time to generate truly random
	
	random_Question = (rand() %5) +1;  // will generate random question from the 5 choices below in switch statement
	
	// Intialize all the variables to zero that will be used in the switch statement
	wrong_Question = correct_Question = asked_Question = answer_Question  = 0;
	 
	while (total_Question>asked_Question){
		switch(random_Question) {
			case 1:
				printf("\n50 multiplied by 3 is:  ");
				scanf("%d", &answer_Question);
					if(answer_Question==150) {
					printf("\n\t\tCorrect");
					asked_Question++;
					correct_Question++;
					break;
					}
				
					else {
					printf("\n\t\tWrong");
					asked_Question++;
					wrong_Question++;
					break;
					}
			case 2:
				printf("\n1000 divided by 2 is:   ");
				scanf("%d", &answer_Question);
					if(answer_Question==500) {
					printf("\n\t\tCorrect");
					asked_Question++;
					correct_Question++;
					break;
					}
					else {
					printf("\n\t\tWrong");
					asked_Question++;
					wrong_Question++;
					break;
					}
		}
	}
			
	
	
}
