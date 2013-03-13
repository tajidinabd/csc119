#include <stdio.h>
int main(){
      int num;
      printf("Enter a number you want to check.\n");
      scanf("%d",&num);
      if((num%3)==0)          //checking whether remainder is 0 or not.
           printf("%d is multiple of 3.",num);
	  else
		   printf("%d is not a multiple of 3.",num);
      return 0;
}
