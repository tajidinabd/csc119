/* Assignment # 8 Print Numbers in Ascending/Descending Order
Derrick "Abu Bakr" Williams 
CSC119003
Jumada Al-Thani 1, 1434 AH  (April 12, 2013 CE)
The Program will give the user prompt to enter 10 numbers. Afterwards will have a menu 
whether to print the numbers in ascending or descending order. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// User Defined Function
void menu(void);
void countUp(void);
void countDown(void);

int main(void)
{
 // Statements
    printf("\tWelcome to the Program.\n");
    printf("\tPress <ENTER> to continue\n");
    getchar();
    menu();

    return 0;  
} // end of main
/*=============== Menu Function =======================
This will use the above User Defined Functions and also declare
the local variables and the single dimension array to be used
*/
void menu(void)
	{
	int pickMenu;
		
		// Statements
		printf("\tProgram Menu\n");
		printf("\t1) Ascending\n");
		printf("\t2) Descending\n");
		scanf("%d", &pickMenu);
		
		// Switch		
		switch(pickMenu)
		{
			case 1: countUp();
				break;
			case 2: countDown();
				break;
			default: printf("Please choose option 1 or 2\n");
				break;
			return;
		} // end of switch
		
	}
/*================= countUp Function =======================
This function will sort and print the numbers in ascending order
*/
void countUp(void)
{
int a[10],i,j,t;

	//Statements
	printf("Enter 10 numbers:\n\n");
	for (i=0;i<10;i++)
	scanf("%d",&a[i]);
	for (i=0;i<10;i++)
	{
	for(j=i+1;j<10;j++)
	{
		if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	}
	}
			printf("Ascending Order is:");
			for(j=0;j<10;j++)
			printf("\n%d",a[j]);
return;
}
/*=================== countDown Function ========================
This function will sort and print the numbers in descending order
*/
void countDown(void)
{
int a[10],i,j,t;
	
		// Statements
		printf("Enter 10 numbers:\n\n");
		for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		for(i=0;i<9;i++)
	{
			for(j=i+1;j<10;j++)
	{
			if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
			printf("\nDescending Order is:\n");
			for(i=0;i<10;i++)
			printf("\n%d ",a[i]) ;
return;
}
