/*  Fortune cookie program */

#include <stdio.h>

main()
{
int iRandomNum = 0;
srand(time());

iRandomNum = (rand() % 4) + 1;

printf("\nFortune Cookie\n");

switch (iRandomNum)  {

case 1:
    prinf("\nYou will meet a new friend today.\n");
    break;
case 2:
    prinf("\nYou will enjoy a long and happy life.\n");
    break;
case 3:
    prinf("\nOpportunity knocks softly. Can you hear it?.\n");
    break;
case 4:
    prinf("\nYou'll be financially rewarded for your good deeds.\n");
    break;

    } // end switch

printf("\nLucky Lotto Numbers: ");
printf("%d ", rand() % 49) + 1);
printf("%d ", rand() % 49) + 1);
printf("%d ", rand() % 49) + 1);
printf("%d ", rand() % 49) + 1);
printf("%d ", rand() % 49) + 1);
printf("%d ", rand() % 49) + 1);

} // end main