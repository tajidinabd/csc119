/* Example 4-1 Computer Science page 154
  Sample program with subfunction
Demonstrates function calls by calling a small function to multiply 2 numbers*/

#include <stdio.h>

//Function declaratrions
int multiply (int num1, int num2);

int main (void)
{
//Local declarations

int multiplier;
int multiplicand;
int product;

//Statements
printf("Enter two integers: ");
scanf("%d%d, &multiplier, &multiplicand);

product = multiply (multiplier, multiplicand);

printf("Product of %d & %d is %d\n", multiplier, multiplicand, product);

return 0;
}  //main

/* =====================Multiply===============
Multiplies twoi numbers and returns product.

Pre num21 and num2 are values to be multiplied
Post product returned
*/

int multiply (int num1, int num2)
{
//Statements
return (num1 * num2);
}// multiply

/* Results:

Enter two integers: 17 21
Product of 17 & 21 is 357
*/