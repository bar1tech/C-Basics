//
//  exercise1_17.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 6/3/25.
//
//  Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>

#define MAXLINE 1000    /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main(void)
{
    
    int len;                //  current line length
    int max;                //  maximum length seen so far
    
    char line[MAXLINE];     //  current input line
    char longest[MAXLINE];  //  longest line saved here
    
    printf("\nEnter input below, CTRL-D to end:\n");
    
    max = 0;
    while (( len = get_line(line, MAXLINE)) > 0 ) {
        if (len > 80) {
            printf("Line is %d characters:\n%s\n", len, line);
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }//while
    
    if (max > 0) {   /* there was a line */
        longest[max-1] = '\0';  // Remove newline from display
        printf("\nThe longest line is:\n");
        printf("%s  (%d characters)\n\n", longest, max);
    }
    
    return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}