//
// Created by robbar1 on 5/19/25.
/// exercise1_3.c
///
#include <stdio.h>

/* This program will
 * print Fahreheit-Celcius table for
 * fahr = 0,20,...,300
 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("   F    C\n-----------\n");   /* table heading */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }//end while

    return 0;
}

/* printf is not part of the C language; there is no input or output defined in C itself,
 * printf is just a useful function from the standard library of functions that are normally
 * accessible to C programs.  In this case stdio.h */