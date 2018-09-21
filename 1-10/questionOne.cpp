#include <stdlib.h>
#include <iostream>

// Question One: Sum of all multiples of 3 and 5 below 1000

int questionOne() {
	int count = 0;
	for (int i = 1; i < 1000; i++) { // it's relatively cheap to increment 1000 times
		if (!(i%3 && i%5)) { // Nand .. if either one has a modulo of 0 we add it. 
			count += i;
		}
	}
	return count;
}

int main () {
	printf("The answer to this question is : %i \n", questionOne());
	return 0;
}
