//
// wc.c
// 1.5.4 Word Counting
//
// Created by robbar1 on 5/26/25.
//
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
//
// The word count program wc.c
// This program counts lines, words and characters in input.
//
#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */

int main(){

    int c, nl, nw, nc, state;
    nl = nw = nc = 0;       // Initialize line, word, and character counts
    state = OUT;            // Start outside a word

    printf("Enter input, CTRL-D to end.\n");
  
    while ((c = getchar()) != EOF) {
        ++nc; // Count characters
        if (c == '\n')
            ++nl; // Count lines
        if (c == ' ' || c == '\n' || c == '\t') 
            state = OUT; // We are outside a word
        else if (state == OUT) {
            state = IN; // We are inside a word
            ++nw; // Count words
        }
    }

    // Print lines, words, and characters
    // cr-lf (enter key) is counted as 1 character
    printf("%d %d %d\n", nl, nw, nc); 
    
    return 0;
}