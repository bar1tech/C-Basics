//
//  exercise1_14.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 5/28/25.
//
// Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

int main(void) {
    int frequencies[128] = {0};  // Array for ASCII character frequencies
    int c;  // int for EOF handling
    
    printf("Enter text (Ctrl+D to end):\n");
    
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < 128)  // Only count ASCII characters
            ++frequencies[c];
    }
    
    // Print frequencies of non-zero counts
    for (int i = 0; i < 128; ++i) {
        if (frequencies[i] > 0) {
            if (i == '\n')
                printf("\\n: %d\n", frequencies[i]);
            else if (i == ' ')
                printf("SPACE: %d\n", frequencies[i]);
            else if (i == '\t')
                printf("\\t: %d\n", frequencies[i]);
            else
                printf("%c: %d\n", i, frequencies[i]);
        }
    }
    
    return 0;
}