//
// exercise1_10.c
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 5/24/25.
//
//  Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
//  backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
//  unambiguous way.
//
// https://stackoverflow.com/questions/4363309/how-to-check-for-the-backspace-character-in-c
// https://www.reddit.com/r/cprogramming/comments/akcm64/unbuffered_input_in_c/ef4a1lb/
// https://www.reddit.com/r/cprogramming/comments/akcm64/comment/ef4a1lb/

#include <stdio.h>

int main()
{
    int c;
    
    printf("\nEnter input, CTRL-D to end.\n");
    
while ((c = getchar()) != EOF) {

    //printf("Received: %d\n", c);
        
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        
        if (c == '\b' || c == 127 || c == 0x7f) { 
            putchar('\\');
            putchar('b');
        }
        
        if (c == '\\') {
            putchar('\\');
        }     
        
        // For all other characters, just output them as they are
        if (c != '\t' && c != '\b' && c != '\\') {
            putchar(c);
        }
    }
    
    printf("\n");
    return 0;
}

