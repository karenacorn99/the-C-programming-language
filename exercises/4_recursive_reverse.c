#include <stdio.h>
#include <string.h>

void reverse(char input[], int head, int tail);

int main() {
    char input[] = "hello";
    reverse(input, 0, strlen(input) - 1);
    printf("%s\n", input);
}

void reverse(char input[], int head, int tail) {
   if (head >= tail) return;
   int t;
   t = input[head];
   input[head] = input[tail];
   input[tail] = t;
   reverse(input, ++head, --tail); 
}
