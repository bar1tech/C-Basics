//
//  exercise1_15.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 6/3/25.
//
//  Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int convert (int f);

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */
    
    printf("\n");
    printf("  F       C\n -----------\n");   /* table heading */

    fahr = lower;
    while (fahr <= upper) {
        celsius = convert(fahr);
        printf("%3d\t%4d\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\n");
    return 0;
}

int convert(int f)
{
    int c;
    c = 5 * (f-32) / 9;
    return c;
}