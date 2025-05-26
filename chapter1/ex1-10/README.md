exercise1_10.c

Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.

We could not get the backspace to work.  We are on macOS 15.5 and using Visual Studio Code
and compiling in the CLI with: `clang -std=c11 exercise1_10.c -o z`

According to:

- https://stackoverflow.com/questions/4363309/how-to-check-for-the-backspace-character-in-c
- https://www.reddit.com/r/cprogramming/comments/akcm64/unbuffered_input_in_c/ef4a1lb/
- https://www.reddit.com/r/cprogramming/comments/akcm64/comment/ef4a1lb/

Our input is buffered and our terminal is handling the backspace behavior such that 
it isn't storing a `char` for us to read. For this to work we would likely need access to 
the unbuffered keyboard information. 

We even tried:
```
        if (c == '\b' || c == 127 || c == 0x7f || c == 0x08) { 
            putchar('\\');
            putchar('b');
        }
```