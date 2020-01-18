/*Write a function draw_parallel that draws parallel lines and a function draw_
rectangle that uses draw_parallel and draw_base to draw a rectangle.

Analysis:
we have to make the sub functions of the rectangle and executes just the rectangle

Problem Inputs:
none 
Problem output:
A graphical Rectangle 
relevant formula
just create the the rectangle form this
Algorithm :
1-Display the rectangle
Steps refinement
1.1-create the parallel lines program
1.2-create the base line program
Implementation:*/

#include <stdio.h>
void draw_parallel();
void draw_base();
void draw_rectangle();

void main(){
    draw_rectangle();
}

void draw_parallel(){
    //creating parallel line
    printf("\n|      |");
    printf("\n|      |");
    printf("\n|      |");
    printf("\n|      |");
    printf("\n|      |\n");
    
}

void draw_base(){
    //creating base line
    printf(" ______");
}

void draw_rectangle(){
    draw_base();
    draw_parallel();
    draw_base();
}
