//
//  exercise1_13.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 5/27/25.
//
//  Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
//  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

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
     *  ndigit is an array that holds the frequency of each word.
     ********************************************************************/
    
    int c, state, cc;
    int ndigit[10];
    
    state = OUT;
    cc = 0;
    
    for (int i = 0; i < 10; ++i) 
        ndigit[i] = 0;
    
    printf("Enter input, CTRL-D to end.\n");
    
    while ((c = getchar()) != EOF) {
        
        if (c != ' ' && c != '\n' && c != '\t') {
            state = IN;
            if (cc < 9)  // Prevent buffer overflow
                ++cc;
        }
        else if ((c == ' ' || c == '\t' || c == '\n') && state == IN) {
            state = OUT;
            if (cc > 0 && cc < 10)  // Bounds check
                ++ndigit[cc];
            cc = 0;
        }
    
    }//while
    
    // Handle last word if input ends without whitespace
    if (state == IN && cc > 0 && cc < 10)
        ++ndigit[cc];
    
    printf("\nWord Length Histogram\n  ++++++++++\n");
    
    for (int i = 1; i < 10; ++i) {
        printf("%d |", i);
        
        for (int j = 0; j < ndigit[i]; ++j) {
            if (ndigit[i] != 0) {
                printf("*");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    
    return 0;
}//main

