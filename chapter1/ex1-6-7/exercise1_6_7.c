//
//  exercise1_6_7.c
//  KandRSection1.5EX6and7
//
//  Created by robbar1 on 5/21/25.
//

#include <stdio.h>

int main()
{

    /****** Exercise 1-6 ***********/
    /* This program prompts for input, and then captures a character
     * from the keyboard. If EOF is signalled (typically through a
     * control-D or control-Z character, though not necessarily),
     * the program prints 0. Otherwise, it prints 1.
     *
     * NB: In CLion ctrl-D does not work, command-D is used but this exits the program immediately.
     *
     * If your input stream is buffered (and it probably is), then
     * you will need to press the ENTER key before the program will
     * respond.
     * http://users.powernet.co.uk/eton/kandr2/krx106.html
     */

    int c;      /* c is an int because char cannot hold a value large enough to accommodate EOF */
    printf("Enter a character: ");
    printf("EOF = %d\n", c = (getchar() != EOF));

    /******Exercise 1-7 print the value of EOF***********/

    printf("EOF = %d", EOF);

    printf("\n\n\n");
    return 0;
}

