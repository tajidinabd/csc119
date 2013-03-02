/*Isdigit check for letter */

#include <stdio.h>
#include <ctype.h>

main()
{

char cResponse = '\0';

printf("\nPlease enter a letter: ");
scanf("%c", &cResponse);

if ( isdigit(cResponse) == 0)
    printf("\nThank you\n");
else
printf("\nYou did not enter a letter\n");

}

