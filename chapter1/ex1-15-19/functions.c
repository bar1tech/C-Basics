//
//  functions.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 6/3/25.
//
//  Example program of Section 1.7 Functions
//
#include <stdio.h>

int power(int m, int n);

/* test power function */

int main()
{
    int i;

    printf("\n");
    printf(" n  2^n  (-3)^n\n");
    printf(" -- ---- ------\n");
    // Print the header for the table of powers
    // The first column is n, the second is 2^n, and the third is (-3)^n
    for (i=0; i < 10; ++i)
        printf("%2d %3d %6d\n", i, power(2,i), power(-3,i));

    printf("\n");       

    return 0;
}

/* power: raise base to n-th power; n >= 0 */
/* uses the reverse for-loop of section 1.8 */

int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    
    return p;
}