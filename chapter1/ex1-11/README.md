exercise 11

How would you test the word count program? What kinds of
input are most likely to uncover bugs if there are any?

The word count program wc.c
This program counts lines, words and characters in input and can be found on page 20 of
The C Progamming Language, 2nd Edition by Brian W. Kernighan, Dennis M. Ritchie.

The following test was generated by `Claude 3.5 Sonnet` in VSCode.

Here are the key test cases we should try for the word count program:

Test Strategy

1. Edge cases:
	- Empty input
	- Single character
	- Single word
	- Multiple spaces between words
	- Tabs and newlines mixed with spaces
	- Words of varying lengths
	- Lines with no words (blank lines)
	
2. Special cases:
	- Input starting with whitespace
	- Input ending with whitespace
	- Multiple consecutive whitespace characters
	- Lines containing only whitespace
	
The word count program wcv2.c
Added descriptive output labels and modify to show test results more clearly.  
This modified version will help visualize how the program processes word boundaries 
and counts different types of input.

```
"   multiple   spaces   "
"word\n\n\nthree-blank-lines"
"\t\tspaces\t\tand\ttabs\t\t"
"one"
""
"a b\nc d"
```
