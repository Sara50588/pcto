#include <stdio.h>
int main()
{
int number, i, fact = 1;
printf("Enter the positive number to find the factorial\n");
scanf("%d", &number);
// if number is negative show the error
if (number < 0)
printf("Error! You have entered negative number and Factorial for negative number does not exist\n");
else
for(i = 1; i <= number; ++i)
}

