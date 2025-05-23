//
// charcount1_8.c
// 1.5.2 Character Counting
//
// Created by robbar1 on 1/13/25.
//
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
//
// This program counts charaters in input.
//
#include <stdio.h>
/* count characters in input; 1st version */
int main(void)
{
    long nc = 0;
    printf("Enter characters while-loop (Ctrl+D to end):\n");
    // getchar() returns EOF when the end of input is reached
    // getchar() returns the next character from stdin
    while (getchar() != EOF)
        ++nc;

    printf("\nnc = %ld\n\n", nc);

    clearerr(stdin); // Clear EOF condition before next input

    printf("Enter characters for-loop (Ctrl+D to end):\n");
    double n;
    for (n = 0; getchar() != EOF; ++n){}
        //;
    printf ("%.0f\n", n);


    return 0;
}