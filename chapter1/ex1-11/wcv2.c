//
// wcv2.c
// 1.5.4 Word Counting
//
// Created by robbar1 on 5/26/25.
//
// The C Progamming Language, 2nd Edition,
// Brian W. Kernighan, Dennis M. Ritchie
//
// Thw word count program wcv2.c
// This modified version of wc.c will help visualize how the program 
// processes word boundaries and counts different types of input.
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
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') 
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
            // Debug output to show word boundaries
            printf("[Word %d] ", nw);
        }
        putchar(c);  // Echo input to see exactly what's being processed
    }

    printf("\n-----------------\n");
    printf("Lines: %d\n", nl);
    printf("Words: %d\n", nw);
    printf("Chars: %d\n", nc);
    
    return 0;
}