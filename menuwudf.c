#include <stdio.h>

void joke();
void menu();


int main()
{
    printf("Hello. Welcome to the program.\n");
    printf("Press RETURN key to continue...\n");
    getchar();
    menu();

    return 0;

}
void menu()
{
    int menu1choice;
    int var1;
    int var2;
    int var3;
    int A;
    int B;
    int C;

    printf("Menu 1\n");
    printf("~~~~~~~~~~\n");
    printf("1. Tell me a joke.\n");
    printf("2. Perform a simple calculation.\n");
    printf("3. Move to Menu 2.\n");
    scanf("%d", &menu1choice);
    switch ( menu1choice )
    {
    case 1:
    {
        joke();
        break;
    }

    }

}
void joke()
{
    printf( "\nA Blonde goes into the cleaners to pick up a black dress \n" );
    printf( "The shop assistant hands it over and says Thank you and come again.\n" );
    printf( "The Blonde takes the dress and says \n" );
    printf( "NO !! This time it was toothpaste you nosey bitch !!\n\n" );
    
    menu();

}


