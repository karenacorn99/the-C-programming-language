#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#define LEAP 1

enum months {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

void Ex_2_2();
void Ex_2_3();
void Ex_2_4();
int Ex_2_7_htoi(char hex_num[]);
int Ex_2_11_lower(int c);

int main() {
    //Ex_2_2();
    //Ex_2_3();
    //int ans1 = Ex_2_7_htoi("0x2a5f");
    //int ans2 =  Ex_2_7_htoi("0X2A5F");
    //int ans3 = Ex_2_7_htoi("2A5F");
    //printf("ans1: %d\n""ans2: %d\n""ans3: %d\n", ans1, ans2, ans3); 
    int ans = Ex_2_11_lower('C');
    printf("%c\n", ans);
}

// Data Types and Sizes
void Ex_2_2() {
    // range of signed char
    printf("Min value of signed char is %d\n", SCHAR_MIN);
    printf("Max value of signed char is %d\n", SCHAR_MAX);
}

// Constants
void Ex_2_3() {
    char greetings[] = "hello," "world";
    printf("%s\n", greetings);

    printf("LEAP: %d\n", LEAP);

    printf("JUN: %d\n", JUN);
}

// Declarations
void Ex_2_4() {
    const double e = 2.71828182845905;
    //e = 3;
    //error: cannot assign to variable 'e' with const-qualified type 'const double' 
}
/* Note: external and static variables are initialized to 0 by default,
         automatic variables (no explicit initializer) have undefined (garbage) values */

int Ex_2_7_htoi(char hex_num[]) {
    int output = 0;
    int curr_digit;
    int base = 1;
    int bound = 0;

    // check if 0x is part of hex_num
    if (hex_num[0] == '0' && (hex_num[1] == 'x' || hex_num[1] == 'X')) {
         bound = 2;
    }

    for (int i = strlen(hex_num) - 1; i >= bound; i--) {
	if (hex_num[i] >= '0' && hex_num[i] <= '9') {
	    // current digit is 0-9
	    curr_digit = hex_num[i] - '0';
	}
	else {
            // current digit is a-f/A_F
	    if (hex_num[i] >= 'A' && hex_num[i] <= 'F') {
		// in caps
                curr_digit = 10 + hex_num[i] - 'A';
	    }
	    else if (hex_num[i] >= 'a' && hex_num[i] <= 'f') {
	        curr_digit = 10 + hex_num[i] - 'a';
	    }
	}
	//printf("%d %d\n", curr_digit, base);
	output += curr_digit * base;
	base *= 16;
    }
    return output;
}

// binary 0b
// octal 0
// hex 0X

int Ex_2_11_lower(int c) {
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
