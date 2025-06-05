//
//  exercise1_19.c
//
//  Created by robbar1 on 6/5/25.
//  The C Progamming Language, 2nd Edition,
//  Brian W. Kernighan, Dennis M. Ritchie
//
//  Exercise 1-19. Write a function reverse(s) that reverses the character string s.
//  Use it to write a program that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 1000    /* maximum input line length */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[], int length);

/* print the longest input line */

int main()
{
    
    int len;                //  current line length
    int max;                //  maximum length seen so far
    
    char line[MAXLINE];     //  current input line
    char longest[MAXLINE];  //  longest line saved here
    
    printf("Enter input below, CTRL-D to end:\n");
    
    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0 ) {
        
        reverse(line,len);
        printf("%s", line);

        if (len > max) {
            max = len;
            copy(longest, line);
        }
        
    }//while
    
    if (max > 0)                    //  there was a line
        printf("%s\n", longest);
    
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
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/*reverse: reverses the character string s */
void reverse(char s[], int length)
{
    char temp;
    
    /* 
     *  length - (2+i) because the last two characters in the array are the '\n' for the carridge return
     *  and '\0' (the null character, whose value is zero) that marks the end of the array.
     */
    for (int i = 0; i <= (length - 2)/2; ++i) {
       
        temp = s[i];
        s[i] = s[length - (2 +i)];
        s[length - (2 +i)] = temp;
        //printf(" %d,%d ", i, length - (2 +i));
        //printf(" %c,%c ", s[i], s[length - (2 +i)]);
    }
    
    //printf(" %s ", s);
}






