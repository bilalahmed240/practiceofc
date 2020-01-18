/*Write a complete C program that prompts the user for the coordinates of two
3-D points ( x 1 , y 1 , z 1 ) and ( x 2 , y 2 , z 2 ) and displays the distance between them
computed using the following formula:
distance = 2(x1 - x2)2 + (y1 - y2)2 + (z1 - z2)2

Analysis:
we will get the inputs from user and compute the answer
Data requirements :
Problem inputs:
float x1, x2, y1, y2, z1, z2;
problem output:
float distance;

relevant formula:
distance = sqrt((pow(x1-x2, 2)) + (pow(y1-y2, 2)) + (pow(z1-z2, 2)));
Design :
we list the algorith next

Intial algorithm:
1-get the cordinates of 3d points
2-compute the distance formula
3-display the result*/

#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, z1, z2, distance;
    printf("\nPlease type the value of x1:");
    scanf("%f", &x1);
    printf("\nPlease type the value of x2");
    scanf("%f", &x2);
    printf("\nPlease type the value of y1");
    scanf("%f", &y1);
    printf("\nPlease type the value of y2");
    scanf("%f", &y2);
    printf("\nPlease type the value of z1");
    scanf("%f", &z1);
    printf("\nPlease type the value of z2");
    scanf("%f", &z2);
    distance = sqrt((pow(x1-x2, 2)) + (pow(y1-y2, 2 )) + (pow(z1-z2, 2)));
    printf("\nDistance between them is %.3f", distance); 
    return 0;
}
