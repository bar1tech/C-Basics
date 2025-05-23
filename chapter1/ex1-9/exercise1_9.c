//
// exercise1_9.c
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
//
// Date: 2025-05-23
//
//  Exercise 1-9.
//  Write a program to copy its input to its output, replacing each string 
//  of one or more blanks by a single blank.


#include <stdio.h>

int main(int argc, const char * argv[])
{

    int c, bl;              /* c is the input, bl is the blank counter */
    
    printf("\nEnter input, CTRL-D to end.\n");
    
    bl = 0;
    while ((c = getchar()) != EOF) {
        
        /* if input is blank increment the blank counter. */
        
        if (c == ' ')
            ++bl;
        
        /* if input is not blank or it is blank and the blank counter is equal to one put the character. */
        
        if (c != ' ' || (c == ' ' && bl == 1) )
            putchar(c);
        
        /* if input is not blank and the blank counter is greater than zero reset the blank counter. */
        
        if (c != ' ' && bl > 0)
            bl = 0;
  
    }
    
    printf("\n");
    
    return 0;
}

