//
// exercise1_8.c
// 1.5.3 Line Counting
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
// Author: robbar1
// Date: 05-23-2025
// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
//

#include <stdio.h>

int main()
{

    int c, nl, bl, t;
    
    printf("\nEnter input, CTRL-D to end.\n");
    
    nl = 0;
    bl = 0;
    t  = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++t;
    }
    
    printf("\n------------\n");
    printf("Blanks: %d\n", bl);
    printf("Tabs: %d\n", t);
    printf("New Lines: %d\n\n", nl);
    
    /*
     EOF indicates "end of file". A newline (which is what happens when you press enter) isn't the end of a file, 
     it's the end of a line, so a newline doesn't terminate this loop.
     
     The code isn't wrong[*], it just doesn't do what you seem to expect. It reads to the end of the input, 
     but you seem to want to read only to the end of a line.
     
     The value of EOF is -1 because it has to be different from any return value from getchar that is an actual character. 
     So getchar() returns any character value as an unsigned char, converted to int, which will therefore be non-negative.
     
     If you're typing at the terminal and you want to provoke an end-of-file, use CTRL-D (unix-style systems) or CTRL-Z (Windows). 
     Then after all the input has been read, getchar() will return EOF, and hence getchar() != EOF will be false, and the loop will terminate.
     
     [*] well, it has undefined behavior if the input is more than LONG_MAX characters due to integer overflow, 
         but we can probably forgive that in a simple example.
     
        http://stackoverflow.com/questions/4358728/end-of-file-eof-in-c
     */
    
    
    return 0;
}

