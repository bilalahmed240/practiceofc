//1. Add refinements to the program outline that follows and write the final C program.
/*
* Compute the sum and average of two numbers.
*/
#include <stdio.h> /* printf, scanf definitions */
int
main(void)
{
float one, two; /* input - numbers to process */
float sum; /* output - sum of one and two */
float average; /* output - average of one and two */
printf("\nplease type first number:");
scanf("%f", &one);
printf("\nplease type second number:");
scanf("%f", &two);/* Get two numbers. */
sum = one + two;/* Compute sum of numbers. */
average = (one + two) / 2; /* Compute average of numbers. */
printf("\nthe sum of numbers is %.2f and the average of numbers is %.2f", sum, average);
/* Display sum and average. */
return (0);
}
