#include <stdio.h>

int main()
{
    printf("this, world\n");    /* \n is valid */
    printf("hello, world\c");    /* \c is invalid */
    printf("hello, world\7");    /* \7 is valid (bell) */
    printf("hello, world\?");    /* \? is valid */
    printf("hello, world\x");    /* \x is invalid */
} 