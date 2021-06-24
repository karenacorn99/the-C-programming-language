#include <stdio.h>
#include <ctype.h>
#define IN 1
#define OUT 0

// 1.5.1 File Copying

/*
int main() {
    int c;
    do {
        c  = getchar();
	putchar(c);
    } while (c != EOF);
}
*/

/*
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
*/

/*
int main() {
    int c;

    c = getchar() != EOF;
    printf("c = %d\n", c);
    // send EOF from terminal using ctrl-d

    printf("EOF: %d\n", EOF);
    // EOF = -1
}
*/

// 1.5.2 Character Counting

/*
int main() {
    double nc;
    for (nc = 0; getchar() != EOF; nc++);
    printf("%.0f\n", nc);
}
*/

// 1.5.3 Line Counting
/*
int main() {
    int c, line_count;
    line_count = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
	    line_count++;
	}
    }
    printf("total number of lines: %d\n", line_count);
}
*/

// Exercise: Write a program to copy its input to its output, replacing each string of one or more blanks
// by a single blank
// Note: isspace() in ctype.h: check whether a char is a white-space character

/*
int main() {
   int c;
   // flag: whether a blank has been put
   int flag = 0;
   while ((c = getchar()) != EOF) {
      if (!isspace(c)) {
          putchar(c);
	  flag = 0;
      }
      else if (isspace(c) && !flag) {
          putchar(c);
          flag = 1;
      }
   } 
}
*/

// Exercise: Write a program to copy its input to its output, 
// replacing tab by \t, backspace by \b, backslash by \\

/*
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
	    putchar('\\');
	    putchar('t');
	}
	else if (c == '\b') {
	    putchar('\\');
	    putchar('b');
	}
	else if (c == '\\') {
	    putchar('\\');
	    putchar('\\');
	}
	else {
	    putchar(c);
	}
    }
}
*/

// 1.5.4 Word Counting

int main() {
    int c, nw, state;
    state = OUT;
    nw = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
	    state = OUT;
	}
	else if (state == OUT) {
	    // first char of a word
	    state = IN;
	    nw++;
	}
    }
    printf("Number of words: %d\n", nw);
}
 
/*
// Exercise: Write a program that prints its input one word per line.
int main() {
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            putchar('\n');
	}
	else {
	    putchar(c);
	}
    }
}
*/
