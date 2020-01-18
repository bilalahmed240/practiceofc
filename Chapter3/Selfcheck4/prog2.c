/*Draw a structure chart for a program with three function subprograms that
displays DOLL in a vertical column of block letters.
Write a complete program for the problem described in Self-Check
Exercise 2.

Analysis:
Graphic representation
Data Requirements :
no data required
Algorithm:
1-Display the Doll Alphabets on screen
refinement of steps
1.1 create letter D in sub program
1.2 create letter O in sub program
1.3 create letter L in sub program
1.4 create Doll in subprgram
Implementation:*/

#include <stdio.h>

void letter_d();
void letter_o();
void letter_l();
void doll();

void main()
{
    
    doll();
}

void letter_d(){
 printf("\n _____");
 printf("\n|     \\");
 printf("\n|       \\");
 printf("\n|         )");
 printf("\n|        //");
 printf("\n|______//");

}

void letter_o(){
    printf("\n _____");
    printf("\n|     |");
    printf("\n|     |");
    printf("\n|     |");
    printf("\n|     |");
    printf("\n|_____|");
    
}

void letter_l(){
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|");
    printf("\n|_____");
    
}

void doll(){
    void letter_d();
    void letter_o();
    void letter_l();
    void letter_l();
    
}
