/* Check for upper and lower case */

#include <stdio.h>

main()
{
char cResponse = '\0';

printf("Enter the letter A: ");
scanf("%c", &cResponse);

if (cResponse == 'A' || cResponse == 'a');
printf("\nCorrect response\n");
else
printf("\nIncorrect response\n");
}