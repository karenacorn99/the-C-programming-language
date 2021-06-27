#include <stdio.h>

void get_char_frequencies();
void get_word_len_histogram();

int main() {
    //get_char_frequencies();
    get_word_len_histogram();
}

// Example: count frequencies of each digit, white space, & other characters
void get_char_frequencies() {
   int c, nspace, nother;
   int freq[10];
   
   nspace = 0;
   nother = 0;
   for (int i = 0; i < 10; i++) {
       freq[i] = 0;
   }

   while ((c = getchar()) != EOF) {
       if (c >=  '0' && c <= '9') {
           freq[c - '0']++;
       }
       else if (c == ' ' || c == '\t' || c == '\n') {
           nspace++;
       }
       else {
           nother++;
       }
   }
   for(int i = 0; i < 10; i++) {
       printf("digit %d appears %d times\n", i, freq[i]);
   }
   printf("number of whitespaces: %d\n", nspace);
   printf("number of other characters: %d\n", nother);
   return;
}

// Exercise: print a histogram of the lengths of words in input
void get_word_len_histogram() {
    
    int c, word_len;
    word_len = 0;
    // assume length of word < 20
    int len_freq[20];

    for(int i = 0; i < 20; i++) {
        len_freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
	    if (word_len > 0) {
	         len_freq[word_len]++;
                 word_len = 0;
	    }
	}
	else {
	    word_len++;
	}
    }

    // print histogram
    for(int i = 0; i < 20; i++) {
        printf("%2d %2d", i, len_freq[i]);
	for(int j = 0; j < len_freq[i]; j++) {
	    printf("=");
	}
	printf("\n");
    }

    return;
}
