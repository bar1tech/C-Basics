//
// Created by robbar1 on 5/20/25.
/// exercise1_4.c
///
#include <stdio.h>

/* This program will  print Fahreheit-Celcius table for
 * fahr = 0,20,...,300 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("   C    F\n-----------\n");   /* table heading */

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }//end while

    return 0;
}
