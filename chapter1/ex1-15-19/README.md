`functions.c`: Example program of Section 1.7 Functions

`exercise1_15.c`: Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

`chararrays.c`: This is the sample program of section 1.9, character arrays.

We encountered a compiler error that occurs because `getline` is already defined in `stdio.h` 
on many systems (including macOS). Here's how to fix it:

To resolve our error we renamed our `getline` function to `get_line`

This change avoids the naming conflict with the standard library's `getline` function while 
maintaining the original functionality.

We ran `chararrays.c` using redirection,

```c
KRC/ch01 % ./aout < words.txt 
```

`exercise1_16.c`: Revise the main routine of the longest-line program (chararrays.c) so it will
correctly print the length of arbitrarily long input lines, and as much as possible of the text.

In the  `printf` statement to suppress the output from printing a newline character between 
the string and the integer we,
 - replace the newline with a null terminator before printing
 - keep the character count accurate
 - maintain the final newline for shell prompt formatting
 
`exercise1_17.c`: Write a program to print all input lines that are longer than 80 characters.

We kept the longest line statements from `exercise1_16.c` and we again used redirection to 
test our program:

```c
KRC/ch01 % ./aout < ex17.txt 
```

This file contains Lorem ipsum text obtained from: `https://www.lipsum.com/`


`exercise1_18.c`: Write a program to remove trailing blanks and tabs from each line of input, 
and to delete entirely blank lines.

Input from redirection is different than from the keyboard.  The keyboard will supply `\t`
directly into our array.  A text file may just place blanks into the file when a tab is
pressed.

`exercise1_19.c`: Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time.
