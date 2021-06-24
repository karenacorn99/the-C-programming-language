#include <stdio.h>

/* 
int main() {
    float rel = 5.0 / 9.0;
    printf("%f\n", rel);
}
// integer division: 5 / 9 = 0.000000
// floating point division: 5.0 / 9.0 = 0.555556
*/

/*
// Exercise: print corresponding Celsius to Farenheit table
int main() {
    // print corresponding temperatures in Farenheit for 0, 20, 40, 60, ... degree C
    // formula: F = C x 9/5 + 32 
    
    float F;
    int C = 0;
    int end = 100;
    int step = 20;

    printf("Temperature Conversion Table\n");

    while (C <= end)  {
    	F = C * (9.0 / 5.0) + 32;
	printf("%3d\t%5.1f\n", C, F);
	C += step;
    }
}
*/

int main() {
   float F;

   printf("Temperature Conversion Table\n");

   for (int C = 0; C <= 100; C += 20) {
      F = C * (9.0 / 5.0) + 32;
      printf("%3d\t%5.1f\n",  C, F);
   }
}
