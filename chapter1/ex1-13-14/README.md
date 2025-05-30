arrays.c

This is the sample program of section 1.6, Arrays, on page 22 of our text.
It counts the number of digits, white space, and other characters in its input
and uses an array to keep track of the number of occurrences of each digit.
It serves as the sample program for exercises 1-13 and 1-14.

In the text we have the following statement:

```c
The output of this program on itself is
digits = 9 3 0 0 0 0 0 0 0 1, white space = 123, other = 345
```

In order for us to execute the program on itself we must make us of use input
redirection to control how data is passed to and from our program. 

Consider,

```c
> ./myprog < infile.txt
```

`infile.txt` is a file that contains input data for our program.  The `<` operator 
redirects the contents of `infile.txt` to the standard input (stdin) of `myprog`.
This means that when our program reads from standard input (e.g., using scanf or getchar), 
it will read data from `infile.txt` instead of waiting for user input from the keyboard.

In general,

`< infile.txt`: Redirects input from `infile.txt` to the program.,
`> output.txt`: Redirects output from the program to `output.txt`, overwriting it.,
`>> output.txt`: Redirects output to `output.txt`, appending to it instead of overwriting.

When we execute our program on itself we have the following output:

```c
KRC/ch01 % ./aout < arrays.c     
digits = 10 9 5 1 1 2 1 0 1 1, white space = 306, other = 698
```

Where `KRC/ch01 %` is or prompt, `aout` is our executable and `arrays.c` is our source file.
Our output differs significantly from our text because we have included a multi-line comment
header, different formatting, and a `return 0;` statement with the inclusion of `int` preceding
`main` in our `main function`.

Our compiler requires,

```c
int main() {
    // code
    return 0;
}
``` 

as where our text uses,

```c
main() {
    // code
}
```

---
exercise1_13.c

Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

exercise1_14.c

Write a program to print a histogram of the frequencies of different characters in its input.

Both are compiled and executed (separately) with the following command:

```c
KRC/ch01 % clang exercise1_13.c -o aout
KRC/ch01 % ./aout < words.txt 
KRC/ch01 % clang exercise1_14.c -o aout
KRC/ch01 % ./aout < words.txt     
```

or any other text based file.