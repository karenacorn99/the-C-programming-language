#include <stdio.h>

void remove_trailing_whitespace(char line[]);
void reverse_copy(char to[], char from[]);

// Exercise 1-16: arbitrary length
/* 
while ((len = getline(line, MAXLINE)) > 0){
    // check if length exceeds MAXLINE
    if (line[len - 1] != '\n') {
        int c;
	while ((c = getchar()) != '\n') {
	    len++;
	} 
    } 
    if (len > max) {...}
}

*/

// Exercise 1-17: print all input lines that are longer than 80 charracters
/* 
if (len > 80) {
    printf("%s", line);
}
*/

// Exercise 1-18: remove trailing blanks and tabs from each line of input, and delete entirely blank lines
/*
// remove blank lines
if (line[0] != '\n') {
    // remove trailing spaces and tabs
    remove_trailing_whitespace(line);
    printf("%s", line);
}
*/

void remove_trailing_whitespace(char line[]) {
    int i = 0;
    while (line[i + 1] != '\n') 
        i++;
    // i is the index before \n
    while (line[i] == ' ' || line[i] == '\t')  
        i--;
    //line[++i] = '\n';
    line[++i] = '\0';
}

void reverse_copy(char to[], char from[]) {
    // get length of original string
    int i = 0;
    while (from[i] != '\0') {
        i++;
    }
    int length = --i;
    printf("%d\n", length);
    int j;
    for (j = 0; j < length; j++) {
        to[j] = from[--i];
    }
    to[j] = '\0';
}

int main() {
    //char line[11] = "abcdef   	\n";
    //remove_trailing_whitespace(line);
    //printf("%send\n", line);
    char from[11] = "hello world";
    char to[11];
    
    /*
    int i = 10;
    int length = i;
    i = 11;
    printf("%d\n", length);
    // length = 10
    */

    reverse_copy(to, from);
    printf("%s\n", to);
}
