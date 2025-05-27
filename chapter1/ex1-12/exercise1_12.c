
//  exercise1_12.c
//
//  Created by robbar1 on 5/27/25.
//
//  Exercise 1-12.
//  Write a program that prints its input one word per line.
//

#include <stdio.h>

//  The symbolic constants IN and OUT to the literal values 1 and 0 because they make the program more readable.

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

int main()
{
    /*******************************************************************
     *  c is the character input.
     *  state records whether the program is currently in a word or not;
     *  initially it is "not in a word", which is assigned the value OUT.
     ********************************************************************/
    
    int c, state;
    state = OUT;
    
    printf("Enter input, CTRL-D to end.\n");
    
    while ((c = getchar()) != EOF) {
  
        if ( c != ' ' && c != '\n' && c != '\t') {
            state = IN;
            putchar(c);
        }
        else if ((c == ' ' || c == '\t' || c == '\n') && state == IN ) {
            state = OUT;
            putchar('\n');
        }

    }//while

    printf("\n");
    
    return 0;
}//main
