//
//  exercise1_18.c
//
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Created by robbar1 on 6/4/25.
//
//  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
//
#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void filter_line(char line[], int maxline);

/* print the longest input line */

int main(void) {
    int len;
    int max;

    char line[MAXLINE];
    char longest[MAXLINE];

    printf("\nEnter input below, CTRL-D to end:\n");

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        filter_line(line, len);
    }

    printf("\n");
    return 0;
}

/* get_line: read a line into s, return length */
/* passes array back via call by reference */
int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
/* filter_line: filters a line s, return length */
void filter_line(char line[], int len){
    int p;
    // Start from len-1 to check last actual character
    for (p = len-1; p >= 0; --p) {
        if (line[p] != '\t' && line[p] != ' ' && line[p] != '\n') {
            line[p+1] = '\n';  // Add newline after last non-space
            line[p+2] = '\0';  // Terminate string
            break;
        }
    }
    if (p >= 0)  // Only print non-empty lines
        printf("%s", line);
}


    // used for debugging inside the while-loop
        // printf("len = %d\n", len);
        // for (int p = 0; p < len; ++p){
        //     if (line[p] == ' ')
        //         line[p] = '+';
        //     if (line[p] == '\t')
        //         line[p] = '-';
        //     if (line[p] == '\n')
        //         line[p] = '*';

        //     printf("line[%d] = %c\n", p, line[p]);
        // }
        // printf("\n");
        // for (int p = len-1; p >= 0; --p){
        //     printf("line[%d] = %c\n", p, line[p]);
        // }
        //printf("%s", line);