/*C Program to Enter 5 Number at a time & Display them in Reverse Order of the input*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
 int i, x[10];
 for (i=0;i<10;i++)
   {
   printf("Enter the number\n");
   scanf("%d",&x[i]);
   }
 printf("\nThe reverse order is\n");
 for (i=9;i>=0;i--)
   {
   printf("\n%d",x[i]);
   }
   return 0;
}
