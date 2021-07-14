#include <stdio.h>

void count_char();

int main() {
    count_char(); 
}

/* count digits, white spaces, otheres
   using switch statements */
void count_char() {
    int c, nwhite, nother, ndigits[10];
    
    nwhite = 0;
    nother = 0;
    for (int i = 0; i < 10; i++) {
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0': case '1': case '2': case '3': case '4':
	    case '5': case '6': case '7': case '8': case '9':
	        ndigits[c - '0']++;
		break;
	    case ' ':
	    case '\n':
	    case '\t':
	        nwhite++;
		break;
	    default:
	        nother++;
		break;

        }
    }
    printf("digits: \n");
    for (int i = 0; i < 10; i++) {
        printf("%2d %2d\n", i, ndigits[i]);
    }
    printf("white space: %d\n", nwhite);
    printf("other chars: %d\n", nother);
}
