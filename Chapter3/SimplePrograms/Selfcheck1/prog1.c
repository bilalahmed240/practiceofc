/*Describe the problem inputs and outputs and write the algorithm for a program
that computes an employee’s gross salary given the hours worked and
the hourly rate.
Analysis:
The employers number of hours will be multiplied by the hourly rate.
Data Requirements :
Problem Inputs :
double num_of_hrs_worked.
double hourly_rate.
Problem Output :
double Salary
Relevant Formula :
Salary = num_of hrs_of worked * hourly_rate 
Design :
We will design the algorithms next
Algorithm:
1-Get the number of hours employer worked
2-Get the hourly rate
3-compute the salary
4-Display the salary of employer
step 3 refinement 
computer num_of_hrs_worked and hourly rate 
salary = num_of_hrs_worked * hourly_rate
Program:*/
#include <stdio.h>

int main(){
    float num_of_hrs_worked, hourly_rate, salary;
    printf("please type number of hrs you worked:\n");
    scanf("%f", &num_of_hrs_worked);
    printf("Please type hourly rate :\n");
    scanf("%f", &hourly_rate);
    salary = num_of_hrs_worked * hourly_rate;
    printf("Your Salary will be %.3f)", salary;
    
    
    
    
    
}



