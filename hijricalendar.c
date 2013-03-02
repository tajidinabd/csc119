/* Derrick Williams
CSC119003
Rabi Al-Ahkhar 19, 1434 AH  (March 1, 2013 CE)
This program will display the months for the Hijri Calendar which is a calendar used in 
the Islamic World user is expected to input a number from 1-12 
and will also check to verify user input is a number.
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int Hijri_number;
	
	printf("Please choose a number 1 thru 12:\n");
	scanf("%d", &Hijri_number);
		
		if (isdigit(Hijri_number)) {
			printf("\nYou must input a digit\n");
		}
	switch (Hijri_number)
	{
	case 1: 
			printf("The month is called Muharram\n");
            break;
	case 2: 
			printf("The month is called Safar\n");
            break;
	case 3: 
			printf("The month is called Raby` al-awal\n");
            break;
	case 4: 
			printf("The month is called Raby` al-THaany\n");
            break;
	case 5: 
			printf("The month is called Jumaada al-awal\n");
            break;
	case 6: 
			printf("The month is called Jumaada al-THaany\n");
            break;
	case 7: 
			printf("The month is called Rajab\n");
            break;
	case 8: 
			printf("The month is called SHa`baan\n");
            break;
	case 9: 
			printf("The month is called RamaDHaan\n");
            break;
	case 10: 
			printf("The month is called SHawwal\n");
            break;
	case 11: 
			printf("The month is called Thw al-Qi`dah\n");
            break;
	case 12: 
			printf("The month is called Thw al-Hijjah\n");
            break;
}
return 0;
}
