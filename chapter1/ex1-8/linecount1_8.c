/*
 * linecount1_8.c
 * 1.5.3 Line Counting
 * The C Progamming Language, 2nd Edition,
 * Brian W. Kernighan, Dennis M. Ritchie
 * Author: robbar1
 * Date: 2025-05-23
 */

#include <stdio.h>
/* count lines in input */
int main(void) {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }
    printf("Number of lines: %d\n", nl);
    return 0;
}
