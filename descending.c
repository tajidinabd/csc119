# include<stdio.h>
# include<conio.h>


int main(void)
{
int arr[10];
int i,j,temp;
printf("Enter 10 nos.\n\n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
for(i=0;i<9;i++)
{
  for(j=i+1;j<10;j++)
  {
   if(arr[i]<arr[j])
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
}
}
printf("\nDescending Order is :\n");
for(i=0;i<10;i++)
printf("\n%d ",arr[i]) ;
return 0;
}
