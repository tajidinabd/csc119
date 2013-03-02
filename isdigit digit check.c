/* Isdigit example */

#include <stdio.h>
#include <ctype.h>

main()
{

char cResponse = '\0';

printf("\nPlease enter a digit: ");
scanf("%c", &cResponse);

if ( isdigit(cResponse))
    printf("\nThank you\n");
else
printf("\nYou did not enter a digit\n");

}