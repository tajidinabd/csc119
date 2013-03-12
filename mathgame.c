    /*Create a math quiz program that prompts the user for how many
questions to ask. The program should congratulate the player if
he or she gets the correct answer or alert the user of the correct
answer in the event the question is answered incorrectly.
The math quiz program should also keep track of how many
questions the player has answered correctly and incorrectly and
display these running totals at the end of the quiz.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int iTotalQuestions, iRndQuestion, iQuestionsAsked; 
    int iWrong, iAnswer, iCorrect;
     
     
    printf("\t\t***Math Quiz***");
    printf("\n\nHow many questions would you like to answer?");
    scanf("%d", &iTotalQuestions);
    printf("\n%d questions it is then", iTotalQuestions);
 
    srand(time(NULL));
 
    iRndQuestion = (rand() %5)+1;
 
    printf("\n\nLets get started!!!!!");
     
    iWrong = iAnswer = iCorrect = iQuestionsAsked = 0;
     
    while(iTotalQuestions>iQuestionsAsked) {
        switch(iRndQuestion)
            case 1:{
             printf("\n8 divided by 2 equals:  ");
             scanf("%d", &iAnswer);
                if(iAnswer==4){
                printf("\n\t\tCorrect!!!");
                iQuestionsAsked++;
                iCorrect++;
                break;
            }
                else {
                printf("\n\t\tWrong :(");
                iQuestionsAsked++;
                iWrong++;
                break;
            }
            case 2:
             printf("\n8 multiplied by 4 equals:  ");
             scanf("%d", &iAnswer);
                if(iAnswer == 32){
                printf("\n\t\tCorrect!!!");
                iQuestionsAsked++;
                iCorrect++;
                break;
            }
                else {
                printf("\n\t\tWrong :(");
                iQuestionsAsked++;
                iWrong++;
                break;
            }
            case 3:
             printf("\n10 squared equals:  ");
             scanf("%d", &iAnswer);
                if(iAnswer == 100){
                printf("\n\t\tCorrect!!!");
                iQuestionsAsked++;
                iCorrect++;
                break;
            }
                else {
                printf("\n\t\tWrong :(");
                iQuestionsAsked++;
                iWrong++;
                break;
            }
 
            case 4:
             printf("\nThe square root of 4 is:  ");
             scanf("%d", &iAnswer);
                if(iAnswer == 2){
                printf("\n\t\tCorrect!!!");
                iQuestionsAsked++;
                iCorrect++;
                break;
            }
                else {
                printf("\n\t\tWrong :(");
                iQuestionsAsked++;
                iWrong++;
                break;
            }
            case 5:
             printf("\n9 plus 19:  ");
             scanf("%d", &iAnswer);
                if(iAnswer == 28){
                printf("\n\t\tCorrect!!!");
                iQuestionsAsked++;
                iCorrect++;
                break;
            }
                else {
                printf("\n\t\tWrong :(");
                iQuestionsAsked++;
                iWrong++;
                break;
            }
        }
} 
 
     
    if(iQuestionsAsked==iCorrect) {
        printf("\n\n\t\tAMAZING YOU GOT THEM ALL RIGHT!!!!!!\n\n\n");
        return 0;
        }
    printf("\n\nYou got a total of %d correct and %d wrong\n\n\n", iCorrect, iWrong);
     
}
