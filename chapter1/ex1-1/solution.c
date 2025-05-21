/*
 * #include <stdio.h>
 * tells the compiler to include information about the standard input/output library;
 * this line appears at the beginning of many C source files.
 * The standard library is described in Chapter 7 and Appendix B
 */
#include <stdio.h>

/* define a function named main that receives no argument value */
int main()
{
    /* main calls the library function printf to print this sequence of characters
     * \n represents the newline character */
    //printf("hello, world\n");
    printf("\n");
    printf("hello, ");
    printf("world ");
    printf("\n");
}
