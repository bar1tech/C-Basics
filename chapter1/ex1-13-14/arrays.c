//
//  arrays.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 5/28/25.
//
//  This is the sample program of section 1.6, Arrays, on page 22 of our text.
//  It counts the number of digits, white space, and other characters in its input
//  and uses an array to keep track of the number of occurrences of each digit.
//
//  This is the sample program for exercises 1-13 and 1-14.
//
#include <stdio.h>

/* count digits, white space, others */

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}