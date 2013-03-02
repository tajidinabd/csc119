/* Switch example */

#include <stdio.h>

main()
{
int iResponse = 0;

printf("\n1\tSports\n");
printf("\n2\tGeography\n");
printf("\n3\tMusic\n");
printf("\n4\tWorld Events\n");
printf("\nPlease select a Catagory (1 - 4): ");
scanf("%d", iResponse);

switch ( iResponse) {

    case 1:
        printf("\nYou selected Sports questions\n");
    case 2:
        printf("\nYou selected Geography questions\n");
    case 3:
        printf("\nYou selected Music questions\n");
    case 4:
        printf("\nYou selected World Events questions\n");  
`   } // end switch

} // end main
