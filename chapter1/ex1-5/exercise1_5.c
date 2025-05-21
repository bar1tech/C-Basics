//
/// Created by robbar1 on 5/20/25.
/// exercise1_5.c
/// print Fahrenheit-Celsius table
//
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main() {

    int fahrenheit;

    printf("  F    C\n-----------\n");   /* table heading */

    for (fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP) {
        printf("%3d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit - 32));
    }

    return 0;
}