//
//  exercise1_16.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 6/3/25.
//
//  Revise the main routine of the longest-line program (chararrays.c) so it will
//  correctly print the length of arbitrarily long input lines, and as much as possible
//  of the text.

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;                /* current line length */
    int max;                /* maximum length so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) {   /* there was a line */
        longest[max-1] = '\0';  // Remove newline from display
        printf("%s  (%d characters)\n", longest, max);
    }

    return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim){

    int c, i;
    
    for (i=0; i<lim-1 && (c = getchar()) != EOF && c !='\n'; ++i)
        s[i] = c;
        
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to; assume 'to' is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}