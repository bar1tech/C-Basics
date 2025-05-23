NOTE 1
What should be the output of this program if we enter the following input ending
with ctrl-D at the CLI: 1 2 3 4 5

The output of this program will be:

```
Enter characters (Ctrl+D to end):

nc = 9
```

**Explanation:**
- The input `1 2 3 4 5` (with spaces between numbers) consists of 9 characters:
    - Five digits: `1`, `2`, `3`, `4`, `5`
    - Four spaces: the spaces between the numbers
- The program counts every character, including spaces and the newline
  (if you press Enter before Ctrl+D, that newline is also counted).
- If you type `1 2 3 4 5` and then press Enter (which adds a newline), and then Ctrl+D,
  the count will be 10 (because of the newline character).
- If you type `1 2 3 4 5` and then Ctrl+D immediately (without pressing Enter),
  the count will be 9.

So, the output will be either:

```
nc = 9
```
or

```
nc = 10
```

depending on whether you press Enter before Ctrl+D.

---

NOTE 2
Why does the program skip the `for-loop` when executed?

The program skips the `for-loop` because after the `while-loop`, the input stream (`stdin`)
is already at `end-of-file (EOF)`.  
When you reach `EOF` in the first input (while-loop), the second input (for-loop) immediately
sees EOF and does not execute its body.

**To fix this:**  
You need to clear the EOF condition on `stdin` before reading again, or restart the
program for new input.

**Summary:**
- Once `EOF` is reached, all further input operations return `EOF` until the program ends or
  the `EOF` condition is cleared.

How do we clear the `EOF` condition on stdin?

You can clear the `EOF` condition on `stdin` by calling `clearerr(stdin);` before reading input again.

Here’s how you can add it to your program:

Add `clearerr(stdin);` before the second input section to clear the EOF flag.

---
NOTE 3
Is the `;` character really needed in the body of the `for-loop`?

No, the `;` character is not strictly needed as a statement, but it is required by C
syntax when you want an empty loop body.

In your code:
```c
for (n = 0; getchar() != EOF; ++n)
    ;
```
The `;` acts as the loop body, indicating that nothing should be executed inside the loop.
If you remove it, the compiler will expect a statement or block after the `for` and will produce a syntax error.

**Summary:**
- The `;` is needed to indicate an empty loop body.
- If you want to execute statements in the loop, replace the `;` with those statements or
  a block `{ ... }`.
